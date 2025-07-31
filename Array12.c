#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    SUM OF ARRAY int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    printf("%d", sum);
    MAX IN ARR int max = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("%d", max);
    MIN IN ARR int min = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > min)
        {
            min = a[i];
        }
    }
    printf("%d", min);
    ODD AND EVEN int odd = 0, even = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Odd = %d\nEven = %d", odd, even);
    Reverse Array for (int i = 4; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    Second largest int max = a[0];
    int secmax = a[1];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            secmax = max;
            max = a[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > secmax && a[i] != max)
        {
            secmax = a[i];
        }
    }
    printf("Max = %d\nSec max = %d", max, secmax);
    Search and retur index int b = 1;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == b)
        {
            printf("Value found at index %d", i);
        }
    }
    Checking if array is in ascending or not >>
        int check = 0;
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] < a[j])
            {
                check = 1;
            }
            else
            {
                check = 0;
            }
        }
    }
    if (check == 1)
    {
        printf("The array is sorted");
    }
    else
    {
        printf("The array is not sorted");
    }
    return 0;
}