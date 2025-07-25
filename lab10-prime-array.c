#include <stdio.h>
int main() {
    int numbers[5];
    int isPrime;
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("Prime numbers: ");
    for (int i = 0; i < 5; i++) {
        if (numbers[i] < 2)
            continue;
        isPrime = 1;
        for (int j = 2; j * j <= numbers[i]; j++) {
            if (numbers[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", numbers[i]);
        }
    }
    return 0;
}
