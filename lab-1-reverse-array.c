#include <stdio.h>
int main() {
    int numbers[10];
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("Numbers in reverse order:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    return 0;
}
