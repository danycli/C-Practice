#include <stdio.h>
int main() {
    int numbers[7];
    printf("Enter 7 numbers:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("Numbers divisible by 3: ");
    for (int i = 0; i < 7; i++) {
        if (numbers[i] % 3 == 0) {
            printf("%d ", numbers[i]);
        }
    }
    return 0;
}
