#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    
    printf("Enter n for nth Fibonacci number: ");
    scanf("%d", &n);
    
    printf("Fibonacci number at position %d: %d\n", n, fibonacci(n));
    
    return 0;
}
