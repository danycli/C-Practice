#include <stdio.h>
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

void snakesLadders(int *rounds2)
{
    if (*rounds2 == 3)
    {
        *rounds2 += 18;
    }
    else if (*rounds2 == 26)
    {
        *rounds2 -= 18;
    }
    else if (*rounds2 == 43)
    {
        *rounds2 += 22;
    }
    else if (*rounds2 == 57)
    {
        *rounds2 -= 17;
    }
    else if (*rounds2 == 72)
    {
        *rounds2 += 22;
    }
    else if (*rounds2 == 98)
    {
        *rounds2 -= 20;
    }
}

void dice(int randnum)
{
    if (randnum == 1)
    {
        spacing();
        printf("Dice = %d (⚀)", randnum);
        printf("\n");
    }
    else if (randnum == 2)
    {
        spacing();
        printf("Dice = %d (⚁)", randnum);
        printf("\n");
    }
    else if (randnum == 3)
    {
        spacing();
        printf("Dice = %d (⚂)", randnum);
        printf("\n");
    }
    else if (randnum == 4)
    {
        spacing();
        printf("Dice = %d (⚃)", randnum);
        printf("\n");
    }
    else if (randnum == 5)
    {
        spacing();
        printf("Dice = %d (⚄)", randnum);
        printf("\n");
    }
    else
    {
        spacing();
        printf("Dice = %d (⚅)", randnum);
        printf("\n");
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
    printf(BOLD "Player's 1 turn (\033[1;31m♞ \033[33m)\n" RESET);

    for (int i = 0; i < (120 - 50) / 2; i++)
    {
        printf(" ");
    }
    printf("Press Enter(⏎ ) to roll the Dice....");
}
void player2()
{
    printf("\n");
    for (int i = 0; i < (120 - 50) / 2; i++)
    {
        printf(" ");
    }
    printf("Player's 2 turn (\033[1;37m♛ \033[33m)\n");

    for (int i = 0; i < (120 - 50) / 2; i++)
    {
        printf(" ");
    }
    printf("Press Tab(⭾ ) to roll the Dice....");
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
                            printf("\033[1;31m ♞  \033[33m");
                        }
                        else if (rounds2 == num)
                        {
                            printf("\033[1;37m ♛  \033[33m");
                        }
                        else if (num == 100)
                        {
                            printf("\033[1;36m%d\033[33m ", num);
                        }
                        else if (num == 21)
                        {
                            printf("\033[38;2;101;67;33m %d \033[0m", num);
                        }
                        else if (num == 26)
                        {
                            printf(" 🐍 ");
                        }
                        else if (num == 57)
                        {
                            printf(" 🐍 ");
                        }
                        else if (num == 40)
                        {
                            printf("\033[38;2;70;255;70m %d \033[0m", num);
                        }
                        else if (num == 98)
                        {
                            printf(" 🐍 ");
                        }
                        else if (num == 78)
                        {
                            printf("\033[38;2;70;255;70m %d \033[0m", num);
                        }
                        else if (num == 43)
                        {
                            printf(" 🪜  ");
                        }
                        else if (num == 65)
                        {
                            printf("\033[38;2;101;67;33m %d \033[0m", num);
                        }
                        else if (num == 72)
                        {
                            printf(" 🪜  ");
                        }
                        else if (num == 94)
                        {
                            printf("\033[38;2;101;67;33m %d \033[0m", num);
                        }
                        else if (num >= 10)
                        {
                            printf(" \033[1;36m%d\033[33m ", num);
                        }
                        else if (num == 8)
                        {
                            printf("\033[38;2;70;255;70m  %d \033[0m", num);
                        }
                        else if (num == 3)
                        {
                            printf(" 🪜  ");
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

    while (1)
    {
        clearScreen();
        char start;
        char roll;
        int randnum = 0;
        char roll1;
        int randnum1 = 0;
        int count1 = 0;
        int count2 = 0;
        int rounds1 = 0;
        int rounds2 = 0;
        char choice;
        int win = 0;
        printf("\nPress Space to start the game.....\n");
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
                printf("\033[1;31m\nInvalid Input!\033[33m");
                printf("\033[1;31mTry again.....\033[33m\n");
            }
        }
        printf("\n\n\n");
        for (int i = 0; i <= (120 - 27) / 2; i++)
        {
            printf(" ");
        }
        printf("\033[35m----SNAKE AND LADDERS----\033[33m\n\n");
        // printf("\033[35m");
        int boxWidth = 68;
        int space = (120 - 68) / 2;
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
        printf(BOLD "║                           -:INSTRUCTIONS:-                          ║\n" RESET);
        for (int i = 0; i <= space; i++)
        {
            printf(" ");
        }
        printf("║   Roll the dice🎲, climb ladders🪜 , dodge snakes🐍 , reach 100🎯!   ║\n");
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
                        dice(randnum);

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
                        printf("\033[1;31mInvalid Input!\033[33m");
                        spacing();
                        printf("\033[1;31mTry again.....\033[33m\n");
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
                        dice(randnum);
                        if (rounds1 + randnum <= 100)
                        {
                            rounds1 += randnum;
                            snakesLadders(&rounds1);
                        }
                        table(a, rounds1, rounds2);
                        break;
                    }
                    else
                    {
                        spacing();
                        printf("\033[1;31m\nInvalid Input!\033[33m");
                        spacing();
                        printf("\033[1;31mTry again.....\033[33m\n");
                        break;
                    }
                }
                if (rounds1 == 100)
                {
                    printf("\n");
                    spacing();
                    printf("          Player 1 Wins! Congratulations🎉\n");
                    printf("\n\n");
                    win = 1;
                    break;
                }
            }
            player2();
            if (count2 <= 0)
            {
                while (1)
                {
                    roll1 = getch();
                    if (roll1 == '\t')
                    {
                        int min = 1;
                        int max = 6;

                        srand(time(NULL));
                        int randomNumber = min + rand() % (max - min + 1);
                        randnum1 = randomNumber;
                        clearScreen();
                        dice(randnum1);

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
                        printf("\033[1;31mInvalid Input!\033[33m");
                        spacing();
                        printf("\033[1;31mTry again.....\033[33m\n");
                    }
                }
            }
            else
            {
                while (1)
                {
                    roll1 = getch();
                    if (roll1 == '\t')
                    {
                        int min = 1;
                        int max = 6;

                        srand(time(NULL));
                        int randomNumber = min + rand() % (max - min + 1);
                        randnum1 = randomNumber;
                        clearScreen();
                        dice(randnum1);
                        if (rounds2 + randnum1 <= 100)
                        {
                            rounds2 += randnum1;
                            snakesLadders(&rounds2);
                        }
                        table(a, rounds1, rounds2);
                        break;
                    }
                    else
                    {
                        spacing();
                        printf("\033[1;31mInvalid Input!\033[0m");
                        spacing();
                        printf("\033[1;31mTry again.....\033[0m\n");
                    }
                }
                if (rounds2 == 100)
                {
                    printf("\n");
                    spacing();
                    printf("          Player 2 Wins! Congratulations🎉\n");
                    printf("\n\n");
                    win = 1;
                    break;
                }
            }
        }
        if (win == 1)
        {
            spacing();
            printf("Do you want to play again....");
            spacing();
            printf("y/n\n");
            choice = getch();
            if (choice == 'y' || choice == 'Y')
            {
                printf("\n");
            }
            else if (choice == 'n' || choice == 'N')
            {
                printf("\n");
                spacing();
                printf("Exiting the game");
                spacing();
                printf("Thank You for Playing");
                break;
            }
            else
            {
                while (1)
                {
                    spacing();
                    printf("\033[1;31mInvalid Input!\033[33m");
                    printf("\033[1;31mTry again.....\033[33m");
                    choice = getch();
                    if (choice == 'y' || choice == 'Y' || choice == 'n' || choice == 'N')
                    {
                        break;
                    }
                }
            }
        }
        if (choice == 'n' || choice == 'N')
        {
            printf("\n");
            spacing();
            printf("Exiting the game");
            spacing();
            printf("Thank You for Playing");
            break;
        }
    }
    return 0;
}