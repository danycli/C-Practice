#include <stdio.h>

// Function to display the game board
void displayBoard(char a, char b, char c, char d, char e, char f, char g, char h, char i) {
    printf("                           |   |      \n");
    printf("                         %c | %c | %c    \n", a, b, c);
    printf("                        ___|___|____  \n");
    printf("                           |   |      \n");
    printf("                         %c | %c | %c    \n", d, e, f);
    printf("                        ___|___|____  \n");
    printf("                           |   |      \n");
    printf("                         %c | %c | %c    \n", g, h, i);
    printf("                           |   |      \n");
}

// Function to check if Player 1 (X) has won
int checkPlayer1Win(char a, char b, char c, char d, char e, char f, char g, char h, char i) {
    // Check rows
    if (a == b && a == c && b == c && a == 'X' && b == 'X' && c == 'X') {
        printf("\n                  ---Player 1 Wins---");
        return 1;
    } else if (d == e && e == f && f == d && d == 'X' && e == 'X' && f == 'X') {
        printf("\n                  ---Player 1 Wins---");
        return 1;
    } else if (g == h && h == i && i == g && g == 'X' && h == 'X' && i == 'X') {
        printf("\n                  ---Player 1 Wins---");
        return 1;
    } 
    // Check columns
    else if (a == d && d == g && g == a && a == 'X' && d == 'X' && g == 'X') {
        printf("\n                  ---Player 1 Wins---");
        return 1;
    } else if (b == e && e == h && h == b && b == 'X' && e == 'X' && h == 'X') {
        printf("\n                  ---Player 1 Wins---");
        return 1;
    } else if (c == f && f == i && i == c && c == 'X' && f == 'X' && i == 'X') {
        printf("\n                  ---Player 1 Wins---");
        return 1;
    } 
    // Check diagonals
    else if (a == e && e == i && i == a && a == 'X' && e == 'X' && i == 'X') {
        printf("\n                  ---Player 1 Wins---");
        return 1;
    } else if (c == e && e == g && g == c && c == 'X' && e == 'X' && g == 'X') {
        printf("\n                  ---Player 1 Wins---");
        return 1;
    }
    
    return 0;
}

// Function to check if Player 2 (O) has won
int checkPlayer2Win(char a, char b, char c, char d, char e, char f, char g, char h, char i) {
    // Check rows
    if (a == b && a == c && b == c && a == 'O' && b == 'O' && c == 'O') {
        printf("\n                  ---Player 2 Wins---");
        return 1;
    } else if (d == e && e == f && f == d && d == 'O' && e == 'O' && f == 'O') {
        printf("\n                  ---Player 2 Wins---");
        return 1;
    } else if (g == h && h == i && i == g && g == 'O' && h == 'O' && i == 'O') {
        printf("\n                  ---Player 2 Wins---");
        return 1;
    } 
    // Check columns
    else if (a == d && d == g && g == a && a == 'O' && d == 'O' && g == 'O') {
        printf("\n                  ---Player 2 Wins---");
        return 1;
    } else if (b == e && e == h && h == b && b == 'O' && e == 'O' && h == 'O') {
        printf("\n                  ---Player 2 Wins---");
        return 1;
    } else if (c == f && f == i && i == c && c == 'O' && f == 'O' && i == 'O') {
        printf("\n                  ---Player 2 Wins---");
        return 1;
    } 
    // Check diagonals
    else if (a == e && e == i && i == a && a == 'O' && e == 'O' && i == 'O') {
        printf("\n                  ---Player 2 Wins---");
        return 1;
    } else if (c == e && e == g && g == c && c == 'O' && e == 'O' && g == 'O') {
        printf("\n                  ---Player 2 Wins---");
        return 1;
    }
    
    return 0;
}

int main() {
    // Display welcome message
    printf("\n \n                ---WELCOME TO TIC TAC TOE---\n \n");
    
    // Initialize variables
    char ch;
    char ch1 = 0;  // Initialize ch1 to avoid garbage value
    int player = 1;
    int move = 0;
    int num = 3;
    char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';
    
    // Display initial board
    displayBoard(a, b, c, d, e, f, g, h, i);
    
    // Game loop
    while (player == 1 || player == 2) {
        // Check if maximum moves reached
        if (move >= 8) {
            break;
        }
    
        // Player 1's turn
        if (player == 1) {
            // Get input from Player 1
            printf("\n                  Player 1(X) turn (1-9) :");
            scanf(" %c", &ch);
            printf("\n \n");
            
            // Validate input
            while (ch == ch1 || ch < '1' || ch > '9') {
                printf("\n                      Invalid Move!\n");
                printf("                       Try Again :");
                scanf(" %c", &ch);
                printf("\n \n");
            }
            
            // Make move based on player's choice
            if (ch == '1') {
                a = 'X';
            } else if (ch == '2') {
                b = 'X';
            } else if (ch == '3') {
                c = 'X';
            } else if (ch == '4') {
                d = 'X';
            } else if (ch == '5') {
                e = 'X';
            } else if (ch == '6') {
                f = 'X';
            } else if (ch == '7') {
                g = 'X';
            } else if (ch == '8') {
                h = 'X';
            } else if (ch == '9') {
                i = 'X';
            }
            
            // Display updated board
            displayBoard(a, b, c, d, e, f, g, h, i);
            move++;
            
            // Check if Player 1 wins
            if (checkPlayer1Win(a, b, c, d, e, f, g, h, i)) {
                num = 2;
                break;
            }
            
            // Switch to Player 2
            player++;
        }
        
        // Player 2's turn
        if (player == 2) {
            // Check if maximum moves reached
            if (move >= 8) {
                break;
            }
            
            // Get input from Player 2
            printf("\n                  Player 2(0) turn (1-9) :");
            scanf(" %c", &ch1);
            printf("\n \n");
            
            // Validate input
            while (ch1 == ch || ch1 < '1' || ch1 > '9') {
                printf("\n                      Invalid Move!\n");
                printf("                       Try Again :");
                scanf(" %c", &ch1);
                printf("\n \n");
            }
            
            while (ch < '1' || ch > '9') {
                printf("\n                      Invalid Move!\n");
                printf("                       Try Again :");
                scanf(" %c", &ch);
                printf("\n \n");
            }
            
            // Make move based on player's choice
            if (ch1 == '1') {
                a = 'O';
            } else if (ch1 == '2') {
                b = 'O';
            } else if (ch1 == '3') {
                c = 'O';
            } else if (ch1 == '4') {
                d = 'O'; // Note: This should probably be 'O' instead of '0'
            } else if (ch1 == '5') {
                e = 'O';
            } else if (ch1 == '6') {
                f = 'O';
            } else if (ch1 == '7') {
                g = 'O';
            } else if (ch1 == '8') {
                h = 'O';
            } else if (ch1 == '9') {
                i = 'O';
            }
            
            // Display updated board
            displayBoard(a, b, c, d, e, f, g, h, i);
            move++;
            
            // Check if Player 2 wins
            if (checkPlayer2Win(a, b, c, d, e, f, g, h, i)) {
                num = 4;
                break;
            }
            
            // Switch back to Player 1
            player--;
        }
    }
    
    // If no winner, declare draw
    if (num % 2 != 0) {
        printf("\n                  It's a draw.....");
    }
    
    return 0;
}
