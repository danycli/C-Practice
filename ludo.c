#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define CONSOLE_LENGTH 120
#define BOLD "\033[1m"
#define RESET "\033[33m"

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void player1()
{
    for (int i = 0; i < (120 - 50) / 2; i++)
    {
        printf(" ");
    }
    printf(BOLD "Player's 1 turn (♖ )\n" RESET);

    for (int i = 0; i < (120 - 50) / 2; i++)
    {
        printf(" ");
    }
    printf("Press Enter to roll the Dice....");
}
void player2()
{
    for (int i = 0; i < (120 - 50) / 2; i++)
    {
        printf(" ");
    }
    printf("Player's 2 turn (♙ )\n");

    for (int i = 0; i < (120 - 50) / 2; i++)
    {
        printf(" ");
    }
    printf("Press Enter to roll the Dice....");
}

void table(char *a)
{
    int num = *a;
    int sidespaces = (CONSOLE_LENGTH - 50) / 2;
    for (int i = 1; i <= sidespaces; i++)
    {
        printf(" ");
    }
    printf("╔");
    for (int i = 1; i < 50; i++)
    {
        if (i % 5 == 0)
        {
            printf("╦");
        }
        else
        {
            printf("═");
        }
    }
    printf("╗\n");
    for (int i = 1; i < 20; i++)
    {
        for (int j = 1; j <= sidespaces; j++)
        {
            printf(" ");
        }
        if (i % 2 == 0)
        {
            printf("╠");
            for (int h = 0; h <= 9; h++)
            {
                for (int w = 0; w <= 3; w++)
                {
                    printf("═");
                }
                if (h < 9)
                {
                    printf("╬");
                }
            }
        }
        else
        {
            printf("║");
            for (int a = 0; a <= 9; a++)
            {
                for (int r = 0; r <= 3; r++)
                {
                    if (a >= 0 && r == 2)
                    {
                        if (num == 100)
                        {
                            printf("\033[1;36m%d\033[33m ", num);
                        }
                        else if (num >= 10)
                        {
                            printf(" \033[1;36m%d\033[33m ", num);
                        }
                        else if (num >= 1)
                        {
                            printf("  \033[1;36m%d\033[33m ", num);
                        }
                        num--;
                        printf("\033[33m");
                    }
                }
                if (a <= 8)
                {
                    printf("║");
                }
            }
        }
        if (i % 2 == 0)
        {
            printf("╣\n");
        }
        else
        {
            printf("║\n");
        }
    }
    for (int i = 1; i <= sidespaces; i++)
    {
        printf(" ");
    }
    printf("╚");
    for (int i = 1; i < 50; i++)
    {
        if (i % 5 == 0)
        {
            printf("╩");
        }
        else
        {
            printf("═");
        }
    }
    printf("╝");
}

void turns(char *roll, int randnum, char *roll1, int randnum1)
{
    player1();
    while (1)
    {
        *roll = getch();
        if (*roll == '\r')
        {
            int min = 1;
            int max = 6;

            srand(time(NULL));
            int randomNumber = min + rand() % (max - min + 1);
            randnum = randomNumber;
            clearScreen();
            printf("\n");
            for (int i = 0; i < (120 - 50) / 2; i++)
            {
                printf(" ");
            }
            printf("Dice = %d", randnum);
            printf("\n");

            if (randnum != 6)
                break;
        }
        else
        {
            printf("\nInvalid Input!\nTry again.....\n");
        }
    }

    player2();
    while (1)
    {
        *roll1 = getch();
        if (*roll1 == '\r')
        {
            int min = 1;
            int max = 6;

            srand(time(NULL));
            int randomNumber = min + rand() % (max - min + 1);
            randnum1 = randomNumber;
            clearScreen();
            printf("\n");
            for (int i = 0; i < (120 - 50) / 2; i++)
            {
                printf(" ");
            }
            printf("Dice = %d", randnum1);
            printf("\n");

            if (randnum1 != 6)
                break;
        }
        else
        {
            printf("\nInvalid Input!\nTry again.....\n");
        }
    }
}

int main()
{
    system("chcp 65001 > nul");
    system("color E");
    char start;
    printf("\nPress Space to start the game.....\n");

    char roll;
    int randnum = 0;
    char roll1;
    int randnum1 = 0;

    while (1)
    {
        start = getch();
        if (start == ' ')
        {
            printf("The game has started\n");
            break;
        }
        else
        {
            printf("Invalid Input!\n Try again.....\n");
        }
    }
    printf("\n\n\n");
    for (int i = 0; i <= (120 - 27) / 2; i++)
    {
        printf(" ");
    }
    printf("\033[35m----SNAKE AND LADDERS----\033[33m\n\n");
    // printf("\033[35m");
    int boxWidth = 42;
    int space = (120 - 46) / 2;
    for (int i = 0; i <= space; i++)
    {
        printf(" ");
    }
    printf("╔");
    for (int i = 0; i <= boxWidth; i++)
    {
        printf("═");
    }
    printf("╗\n");
    for (int i = 0; i <= space; i++)
    {
        printf(" ");
    }
    printf(BOLD "║              -:INSTRUCTIONS:-             ║\n" RESET);
    for (int i = 0; i <= space; i++)
    {
        printf(" ");
    }
    printf("║   Roll the Dice and reach the end (100)   ║\n");
    for (int i = 0; i <= space; i++)
    {
        printf(" ");
    }
    printf("╚");
    for (int i = 0; i <= boxWidth; i++)
    {
        printf("═");
    }
    printf("╝\n\n\n");
    char a[] = {100};
    table(a);
    printf("\n");
    
    turns(&roll,randnum,&roll1,randnum1);

    return 0;
}