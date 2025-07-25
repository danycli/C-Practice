#include <stdio.h>

int main() {
    int count = 0;  // Counter for prime numbers found
    
    
    // Outer loop to iterate through numbers 1 to 50
    for (int num = 2; num <= 50; num++) {
        int isPrime = 1;  // Flag to check if number is prime (1 = prime, 0 = not prime)
        
        // Inner loop to check if the number is prime
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;  // Not a prime number
                break;
            }
        }
        
        // If the number is prime, print it
        if (isPrime == 1) {
            printf("%-4d", num);  // Print with left alignment and width of 4
            count++;
            
            // Check if we need to move to the next row (after every 5 primes)
            if (count % 5 == 0) {
                printf("\n");
            }
        }
    }
    
    // Add a newline if the last row is not complete
    if (count % 5 != 0) {
        printf("\n");
    }
    

    
    return 0;
}
