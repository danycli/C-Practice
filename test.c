#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int min = 10;
    int max = 20;

    // Seed the random number generator
    srand(time(NULL)); 

    // Generate and print a random number between min and max (inclusive)
    int randomNumber = min + rand() % (max - min + 1);
    printf("Random number between %d and %d: %d\n", min, max, randomNumber);
return 0;
}