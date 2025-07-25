#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <string.h>

#define WIDTH 21
#define HEIGHT 19
#define MAX_GHOSTS 4

// Game entities
typedef struct {
    int x, y;
    int dx, dy;
} Entity;

typedef struct {
    int x, y;
    int dx, dy;
    int mode; // 0=chase, 1=scatter, 2=frightened
    int frightenedTimer;
    char symbol;
} Ghost;

// Game state - Using a safer initialization approach
char maze[HEIGHT][WIDTH + 1];

Entity pacman = {1, 1, 0, 0};
Ghost ghosts[MAX_GHOSTS];
int score = 0;
int lives = 3;
int gameOver = 0;
int dotsRemaining = 0;
int powerPelletActive = 0;
int powerPelletTimer = 0;

// Function prototypes
void initMaze();
void initGame();
void drawMaze();
void movePacman();
void moveGhosts();
void checkCollisions();
void updateGame();
void gotoxy(int x, int y);
void hideCursor();
void gameLoop();
void initGhosts();
void drawScore();

void initMaze() {
    // Initialize maze row by row using strcpy to avoid string length issues
    strcpy(maze[0],  "#####################");
    strcpy(maze[1],  "#.........#.........#");
    strcpy(maze[2],  "#o##.###.##.###.##o#");
    strcpy(maze[3],  "#...................#");
    strcpy(maze[4],  "#.##.#.#####.#.##.#.#");
    strcpy(maze[5],  "#....#...#...#......#");
    strcpy(maze[6],  "####.###.#.###.####.#");
    strcpy(maze[7],  "   #.#.......#.#....#");
    strcpy(maze[8],  "####.#.## # ##.####.#");
    strcpy(maze[9],  "#......#  #  #......#");
    strcpy(maze[10], "####.#.## # ##.####.#");
    strcpy(maze[11], "   #.#.......#.#....#");
    strcpy(maze[12], "####.#.#####.#.####.#");
    strcpy(maze[13], "#.........#.........#");
    strcpy(maze[14], "#.##.###.##.###.##.#");
    strcpy(maze[15], "#o.#.....#.....#.o#");
    strcpy(maze[16], "##.#.#.#####.#.#.##");
    strcpy(maze[17], "#....#...#...#....#");
    strcpy(maze[18], "#####################");
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void hideCursor() {
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void initGhosts() {
    // Initialize 4 ghosts with different starting positions and symbols
    ghosts[0] = (Ghost){10, 9, -1, 0, 0, 0, 'A'}; // Red ghost
    ghosts[1] = (Ghost){9, 9, 1, 0, 0, 0, 'B'};   // Pink ghost
    ghosts[2] = (Ghost){10, 10, 0, -1, 0, 0, 'C'}; // Blue ghost
    ghosts[3] = (Ghost){9, 10, 0, 1, 0, 0, 'D'};   // Orange ghost
}

void initGame() {
    system("cls");
    hideCursor();
    
    // Initialize maze first
    initMaze();
    
    // Reset game state
    pacman.x = 1;
    pacman.y = 1;
    pacman.dx = 0;
    pacman.dy = 0;
    score = 0;
    lives = 3;
    gameOver = 0;
    powerPelletActive = 0;
    powerPelletTimer = 0;
    
    // Count dots
    dotsRemaining = 0;
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (maze[i][j] == '.' || maze[i][j] == 'o') {
                dotsRemaining++;
            }
        }
    }
    
    initGhosts();
    srand((unsigned int)time(NULL));
}

void drawMaze() {
    gotoxy(0, 0);
    for (int i = 0; i < HEIGHT; i++) {
        printf("%s\n", maze[i]);
    }
}

void drawScore() {
    gotoxy(0, HEIGHT + 1);
    printf("Score: %d  Lives: %d  Dots: %d", score, lives, dotsRemaining);
    if (powerPelletActive) {
        printf("  POWER MODE! Time: %d", powerPelletTimer);
    }
}

void movePacman() {
    if (!_kbhit()) return;
    
    char key = _getch();
    int newX = pacman.x;
    int newY = pacman.y;
    
    switch (key) {
        case 'w': case 'W':
            newY = pacman.y - 1;
            break;
        case 's': case 'S':
            newY = pacman.y + 1;
            break;
        case 'a': case 'A':
            newX = pacman.x - 1;
            break;
        case 'd': case 'D':
            newX = pacman.x + 1;
            break;
        case 'q': case 'Q':
            gameOver = 1;
            return;
    }
    
    // Check boundaries and walls
    if (newX >= 0 && newX < WIDTH && newY >= 0 && newY < HEIGHT) {
        if (maze[newY][newX] != '#') {
            // Clear old position
            gotoxy(pacman.x, pacman.y);
            printf(" ");
            
            // Handle dot collection
            if (maze[newY][newX] == '.') {
                score += 10;
                dotsRemaining--;
                maze[newY][newX] = ' ';
            } else if (maze[newY][newX] == 'o') {
                score += 50;
                dotsRemaining--;
                powerPelletActive = 1;
                powerPelletTimer = 100;
                maze[newY][newX] = ' ';
                
                // Make all ghosts frightened
                for (int i = 0; i < MAX_GHOSTS; i++) {
                    ghosts[i].mode = 2;
                    ghosts[i].frightenedTimer = 100;
                }
            }
            
            pacman.x = newX;
            pacman.y = newY;
        }
    }
    
    // Draw Pacman
    gotoxy(pacman.x, pacman.y);
    printf("C");
}

void moveGhosts() {
    for (int i = 0; i < MAX_GHOSTS; i++) {
        Ghost *ghost = &ghosts[i];
        
        // Update frightened timer
        if (ghost->mode == 2) {
            ghost->frightenedTimer--;
            if (ghost->frightenedTimer <= 0) {
                ghost->mode = 0;
            }
        }
        
        // Simple AI
        int targetX, targetY;
        
        if (ghost->mode == 2) {
            // Frightened mode - move away from Pacman
            targetX = ghost->x + (ghost->x - pacman.x > 0 ? 1 : -1);
            targetY = ghost->y + (ghost->y - pacman.y > 0 ? 1 : -1);
        } else {
            // Chase mode - move towards Pacman
            targetX = pacman.x;
            targetY = pacman.y;
        }
        
        // Calculate next move
        int newX = ghost->x;
        int newY = ghost->y;
        
        // Simple pathfinding
        if (abs(ghost->x - targetX) > abs(ghost->y - targetY)) {
            newX = ghost->x + (targetX > ghost->x ? 1 : -1);
        } else {
            newY = ghost->y + (targetY > ghost->y ? 1 : -1);
        }
        
        // Check if move is valid
        if (newX >= 0 && newX < WIDTH && newY >= 0 && newY < HEIGHT && 
            maze[newY][newX] != '#') {
            
            // Clear old position
            gotoxy(ghost->x, ghost->y);
            if (maze[ghost->y][ghost->x] == '.') {
                printf(".");
            } else if (maze[ghost->y][ghost->x] == 'o') {
                printf("o");
            } else {
                printf(" ");
            }
            
            ghost->x = newX;
            ghost->y = newY;
        } else {
            // Try random direction
            int directions[4][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}};
            int dir = rand() % 4;
            newX = ghost->x + directions[dir][0];
            newY = ghost->y + directions[dir][1];
            
            if (newX >= 0 && newX < WIDTH && newY >= 0 && newY < HEIGHT && 
                maze[newY][newX] != '#') {
                
                gotoxy(ghost->x, ghost->y);
                if (maze[ghost->y][ghost->x] == '.') {
                    printf(".");
                } else if (maze[ghost->y][ghost->x] == 'o') {
                    printf("o");
                } else {
                    printf(" ");
                }
                
                ghost->x = newX;
                ghost->y = newY;
            }
        }
        
        // Draw ghost
        gotoxy(ghost->x, ghost->y);
        if (ghost->mode == 2) {
            printf("*");
        } else {
            printf("%c", ghost->symbol);
        }
    }
}

void checkCollisions() {
    for (int i = 0; i < MAX_GHOSTS; i++) {
        if (ghosts[i].x == pacman.x && ghosts[i].y == pacman.y) {
            if (ghosts[i].mode == 2) {
                // Eat frightened ghost
                score += 200;
                ghosts[i].x = 10;
                ghosts[i].y = 9;
                ghosts[i].mode = 0;
                ghosts[i].frightenedTimer = 0;
            } else {
                // Pacman dies
                lives--;
                if (lives <= 0) {
                    gameOver = 1;
                } else {
                    pacman.x = 1;
                    pacman.y = 1;
                    Sleep(1000);
                }
            }
        }
    }
}

void updateGame() {
    // Update power pellet timer
    if (powerPelletActive) {
        powerPelletTimer--;
        if (powerPelletTimer <= 0) {
            powerPelletActive = 0;
        }
    }
    
    // Check win condition
    if (dotsRemaining <= 0) {
        gotoxy(0, HEIGHT + 3);
        printf("CONGRATULATIONS! YOU WON! Final Score: %d", score);
        gameOver = 1;
    }
    
    drawScore();
}

void gameLoop() {
    int frameCount = 0;
    
    while (!gameOver) {
        movePacman();
        
        if (frameCount % 3 == 0) {
            moveGhosts();
        }
        
        checkCollisions();
        updateGame();
        
        frameCount++;
        Sleep(100);
    }
    
    gotoxy(0, HEIGHT + 4);
    if (lives <= 0) {
        printf("GAME OVER! Final Score: %d\n", score);
    }
    printf("Press any key to exit...\n");
    _getch();
}

int main() {
    printf("PROFESSIONAL PAC-MAN GAME\n");
    printf("=========================\n");
    printf("Controls: W/A/S/D to move, Q to quit\n");
    printf("Collect all dots to win!\n");
    printf("Avoid ghosts unless you eat a power pellet (o)\n");
    printf("Press any key to start...\n");
    _getch();
    
    initGame();
    drawMaze();
    
    // Draw initial Pacman
    gotoxy(pacman.x, pacman.y);
    printf("C");
    
    // Draw initial ghosts
    for (int i = 0; i < MAX_GHOSTS; i++) {
        gotoxy(ghosts[i].x, ghosts[i].y);
        printf("%c", ghosts[i].symbol);
    }
    
    gameLoop();
    
    return 0;
}
