#include <stdio.h>
#include <math.h>  // Required for pow() function

int main() {
    int num, originalNum, remainder, n = 0;
    float sum = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits (n)
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;  // Reset originalNum for reuse

    // Calculate sum of digits raised to power n
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, n);  // Using pow() from math.h
        originalNum /= 10;
    }

    // Check if the number is Armstrong
    if ((int)sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is NOT an Armstrong number.\n", num);
    }

    return 0;
}
