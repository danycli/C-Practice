#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define CONSOLE_LENGTH 120
#define BOLD "\033[1m"
#define RESET "\033[33m"

void spacing()
{
    printf("\n");
    for (int i = 0; i < (120 - 50) / 2; i++)
    {
        printf(" ");
    }
}

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
    printf("\n");
    for (int i = 0; i < (120 - 50) / 2; i++)
    {
        printf(" ");
    }
    printf(BOLD "Player's 1 turn (♞ )\n" RESET);

    for (int i = 0; i < (120 - 50) / 2; i++)
    {
        printf(" ");
    }
    printf("Press Enter to roll the Dice....");
}
void player2()
{
    printf("\n");
    for (int i = 0; i < (120 - 50) / 2; i++)
    {
        printf(" ");
    }
    printf("Player's 2 turn (♛ )\n");

    for (int i = 0; i < (120 - 50) / 2; i++)
    {
        printf(" ");
    }
    printf("Press Enter to roll the Dice....");
}

void table(char *a, int rounds1, int rounds2)
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
                        if (rounds1 == num)
                        {
                            printf("\033[1;32m ♞  \033[0m");
                        }
                        else if (rounds2 == num)
                        {
                            printf("\033[1;37m ♛  \033[33m");
                        }
                        else if (num == 100)
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
    int count1 = 0;
    int count2 = 0;
    int rounds1 = 0;
    int rounds2 = 0;

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
    table(a, rounds1, rounds2);
    printf("\n");

    while (1)
    {
        player1();
        if (count1 <= 0)
        {
            while (1)
            {
                roll = getch();
                if (roll == '\r')
                {
                    int min = 1;
                    int max = 6;

                    srand(time(NULL));
                    int randomNumber = min + rand() % (max - min + 1);
                    randnum = randomNumber;
                    clearScreen();
                    spacing();
                    printf("Dice = %d", randnum);
                    printf("\n");

                    if (randnum == 6)
                    {
                        rounds1 = rounds1 + 1;
                        table(a, rounds1, rounds2);
                        count1++;
                        break;
                    }
                    else
                    {
                        spacing();
                        printf("Bring up 6 to get the progress started\n");
                        break;
                    }
                }
                else
                {
                    printf("\n");
                    spacing();
                    printf("Invalid Input!");
                    spacing();
                    printf("Try Againg...\n");
                }
            }
        }
        else
        {
            while (1)
            {
                roll = getch();
                if (roll == '\r')
                {
                    int min = 1;
                    int max = 6;

                    srand(time(NULL));
                    int randomNumber = min + rand() % (max - min + 1);
                    randnum = randomNumber;
                    clearScreen();
                    spacing();
                    printf("Dice = %d", randnum);
                    printf("\n");
                    if (rounds1 + randnum <= 100)
                    {
                        rounds1 += randnum;
                    }
                    table(a, rounds1, rounds2);
                    break;
                }
                else
                {
                    spacing();
                    printf("Invalid Input!\nTry again.....\n");
                    break;
                }
            }
            if (rounds1 == 100)
            {
                spacing();
                printf("Player 1 Wins! Congratulations\n");
                break;
            }
        }
        player2();
        if (count2 <= 0)
        {
            while (1)
            {
                roll1 = getch();
                if (roll1 == '\r')
                {
                    int min = 1;
                    int max = 6;

                    srand(time(NULL));
                    int randomNumber = min + rand() % (max - min + 1);
                    randnum1 = randomNumber;
                    clearScreen();
                    spacing();
                    printf("Dice = %d", randnum1);
                    printf("\n");

                    if (randnum1 == 6)
                    {
                        rounds2 = rounds2 + 1;
                        table(a, rounds1, rounds2);
                        count2++;
                        break;
                    }
                    else
                    {
                        spacing();
                        printf("Bring up 6 to get the progress started\n");
                        break;
                    }
                }
                else
                {
                    spacing();
                    printf("\nInvalid Input!");
                    spacing();
                    printf("Try again.....\n");
                }
            }
        }
        else
        {
            while (1)
            {
                roll1 = getch();
                if (roll1 == '\r')
                {
                    int min = 1;
                    int max = 6;

                    srand(time(NULL));
                    int randomNumber = min + rand() % (max - min + 1);
                    randnum1 = randomNumber;
                    clearScreen();
                    spacing();
                    printf("Dice = %d", randnum1);
                    printf("\n");
                    if (rounds2 + randnum1 <= 100)
                    {
                        rounds2 += randnum1;
                    }
                    table(a, rounds1, rounds2);
                    break;
                }
                else
                {
                    spacing();
                    printf("Invalid Input!");
                    spacing();
                    printf("Try again.....\n");
                }
            }
            if (rounds2 == 100)
            {
                spacing();
                printf("Player 2 Wins! Congratulations\n");
                break;
            }
        }
    }

    return 0;
}