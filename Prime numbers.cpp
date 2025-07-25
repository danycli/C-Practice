#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, isPrime;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Loop through each number in the range
    for (int j = num1; j <= num2; j++) {
        if(j < 2) {
            continue; // Skip numbers less than 2 (not prime)
        }
        isPrime = 1; // Assume the number is prime
        
        // Check divisibility from 2 to sqrt(j)
        for (int i = 2; i <= sqrt(j); i++) {
            if (j % i == 0) {
                isPrime = 0;
                break;  // No need to check further if not prime
            }
        }
        
        if (isPrime) {
            printf("%d\n", j);
        }
    }
    
    return 0;
}

