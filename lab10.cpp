#include <stdio.h>

int main() {
    int a[5], i, j, count;

    printf("Enter 5 numbers:");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Prime numbers are: ");
    for (i = 0; i < 5; i++) {
        count = 0;
        if (a[i] > 1) {
            for (j = 1; j <= a[i]; j++) {
                if (a[i] % j == 0) {
                    count++;
                }
            }
            if (count == 2) {
                printf("%d ", a[i]);
            }
        }
    }
}
