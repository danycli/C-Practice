#include <stdio.h>
#include <stdlib.h>
#define CONSOLE_LENGTH 120
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
                    if(a >= 0 && r == 2){
                        if(num == 100){
                            printf("%d ",num);
                        }
                        else if(num >=10){
                            printf(" %d ",num);
                        }
                        else if(num >=1){
                            printf("  %d ",num);
                        }
                        num--;
                    }
                    // if (a<=8 && r!=2){
                    //     printf(" ");
                    // }
                }
                if(a<=8){
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
            // for (int z = 0; z <= 3; z++)
            // {
            //     printf(" ");
            // }
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
    char a []= {100};
    table(a);
    return 0;
}