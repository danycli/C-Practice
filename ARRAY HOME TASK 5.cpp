#include <stdio.h>

int main() {
    int a[5], b[5], sum[5], i;

    printf("Enter 5 numbers for first array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter 5 numbers for second array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < 5; i++) {
        sum[i] = a[i] + b[i];
    }

    printf("Sum of two arrays:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}

