#include <stdio.h>
#include <unistd.h> // for usleep (remove if not available)

#define WIDTH 40
#define HEIGHT 15

void clearScreen() {
    printf("\033[H\033[J"); // ANSI escape code to clear screen
}

void drawGame(int birdPos, int obstacleX, int obstacleGap) {
    clearScreen();
    
    // Draw top border
    for (int i = 0; i < WIDTH; i++) printf("#");
    printf("\n");
    
    // Draw game area
    for (int y = 0; y < HEIGHT; y++) {
        printf("#"); // Left border
        
        // Draw bird or empty space
        for (int x = 1; x < WIDTH-1; x++) {
            if (y == birdPos && x == 5) {
                printf(">"); // The bird
            } 
            // Draw obstacles
            else if (x == obstacleX && (y < obstacleGap || y > obstacleGap + 3)) {
                printf("|");
            } 
            else {
                printf(" ");
            }
        }
        
        printf("#\n"); // Right border
    }
    
    // Draw bottom border
    for (int i = 0; i < WIDTH; i++) printf("#");
    printf("\nScore: %d\nPress SPACE to flap (q to quit)", obstacleX / 10);
}

int main() {
    int birdPos = HEIGHT / 2;
    int obstacleX = WIDTH - 5;
    int obstacleGap = HEIGHT / 3;
    int score = 0;
    int gameOver = 0;
    char input;
    
    // Set terminal to non-blocking input (Unix-like systems)
    system("stty -icanon -echo");
    
    while (!gameOver) {
        drawGame(birdPos, obstacleX, obstacleGap);
        
        // Check for input (non-blocking)
        if (scanf(" %c", &input) > 0) {
            if (input == ' ') birdPos -= 2; // Flap
            if (input == 'q') break; // Quit
        }
        
        // Gravity
        birdPos++;
        
        // Move obstacle
        obstacleX--;
        if (obstacleX < 0) {
            obstacleX = WIDTH - 5;
            obstacleGap = rand() % (HEIGHT - 6);
            score++;
        }
        
        // Collision detection
        if (birdPos >= HEIGHT || birdPos < 0 || 
            (obstacleX == 5 && (birdPos < obstacleGap || birdPos > obstacleGap + 3))) {
            gameOver = 1;
        }
        
        // Small delay (adjust for speed)
        usleep(100000); // 0.1 second
    }
    
    // Reset terminal settings
    system("stty icanon echo");
    
    clearScreen();
    printf("GAME OVER! Final Score: %d\n", score);
    
    return 0;
}
