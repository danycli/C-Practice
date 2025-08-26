#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

void hideCursor()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(consoleHandle, &cursorInfo);
    cursorInfo.bVisible = FALSE; // hide cursor
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);
}
int main()
{
    system("chcp 65001 > nul");

    hideCursor();
    int i = 0;

    while (1)
    {
        printf("\r");
        for (int j = 0; j <= i; j++)
        {
            printf("〰");
            int min = 10;
            int max = 60;
            srand(time(NULL));
            int randomNumber = min + rand() % (max - min + 1);
            if (j == randomNumber)
            {
                printf("$");
                continue;
            }
        }

        i++;
        Sleep(40);
        if (i > 60)
            i = 0;
    }

    return 0;
}
