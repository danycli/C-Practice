#include <stdio.h>
int main() {
    int numbers[10];
    int sum = 0;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 != 0) {
            sum += numbers[i];
       }
    }
    printf("Sum of odd numbers: %d", sum);
    return 0;
}
