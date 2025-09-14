#include <stdio.h>

void board(char a, char b, char c, char d, char e, char f, char g, char h, char i) {
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

// PLAYER 1 CHECKING
int chkPlayer1Win(char a, char b, char c, char d, char e, char f, char g, char h, char i) {
    //R
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
    //C
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
    //D
    else if (a == e && e == i && i == a && a == 'X' && e == 'X' && i == 'X') {
        printf("\n                  ---Player 1 Wins---");
        return 1;
    } else if (c == e && e == g && g == c && c == 'X' && e == 'X' && g == 'X') {
        printf("\n                  ---Player 1 Wins---");
        return 1;
    }
    
    return 0;
}

// PLAYER 2 CHECKING
int chkPlayer2Win(char a, char b, char c, char d, char e, char f, char g, char h, char i) {
    //R
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
    //C
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
    //D
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
    printf("\n \n                ---WELCOME TO TIC TAC TOE---\n \n");
    char ch;
    char ch1 = 0;
    int player = 1;
    int move = 0;
    int num = 3;
    char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';
    
    board(a, b, c, d, e, f, g, h, i);
    //MOVES
    while (player == 1 || player == 2) {
        if (move >= 8) {
            break;
        }
    
        if (player == 1) {
            printf("\n                  Player 1(X) turn (1-9) :");
            scanf(" %c", &ch);
            printf("\n \n");
            
            while ((ch < '1' || ch > '9') ||
			(ch == '1' && a != '1') ||
       		(ch == '2' && b != '2') ||
       		(ch == '3' && c != '3') ||
       		(ch == '4' && d != '4') ||
       		(ch == '5' && e != '5') ||
       		(ch == '6' && f != '6') ||
       		(ch == '7' && g != '7') ||
       		(ch == '8' && h != '8') ||
       		(ch == '9' && i != '9')) {
    		printf("\n                      Invalid Move!\n");
    		printf("                       Try Again :");
    		scanf(" %c", &ch);
    		printf("\n \n");
}
            
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
            
            board(a, b, c, d, e, f, g, h, i);
            move++;
            //PLAYER 1 WIN
            if (chkPlayer1Win(a, b, c, d, e, f, g, h, i)) {
                num = 2;
                break;
            }
            
            player++;
        }
        
        if (player == 2) {
			//MOVES
            if (move >= 8) {
                break;
            }
            
            printf("\n                  Player 2(0) turn (1-9) :");
            scanf(" %c", &ch1);
            printf("\n \n");
            
            while ((ch1 < '1' || ch1 > '9') ||
			(ch1 == '1' && a != '1') ||
       		(ch1 == '2' && b != '2') ||
       		(ch1 == '3' && c != '3') ||
       		(ch1 == '4' && d != '4') ||
       		(ch1 == '5' && e != '5') ||
       		(ch1 == '6' && f != '6') ||
       		(ch1 == '7' && g != '7') ||
       		(ch1 == '8' && h != '8') ||
       		(ch1 == '9' && i != '9')) {
    		printf("\n                      Invalid Move!\n");
    		printf("                       Try Again :");
    		scanf(" %c", &ch1);
    		printf("\n \n");
}
            
            if (ch1 == '1') {
                a = 'O';
            } else if (ch1 == '2') {
                b = 'O';
            } else if (ch1 == '3') {
                c = 'O';
            } else if (ch1 == '4') {
                d = 'O';
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
            
            board(a, b, c, d, e, f, g, h, i);
            move++;
            //PLAYER 1 WIN
            if (chkPlayer2Win(a, b, c, d, e, f, g, h, i)) {
                num = 4;
                break;
            }
            

            player--;
        }
    }
    
    //DRAW
    if (num % 2 != 0) {
        printf("\n                  It's a draw.....");
    }
    
    return 0;
}