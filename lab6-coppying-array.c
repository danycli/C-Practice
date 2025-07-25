#include <stdio.h>
int main() {
    int original[5], copy[5];
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &original[i]);
        copy[i] = original[i];
    }
    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", original[i]);
    }
    printf("\nCopied array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", copy[i]);
    }
    return 0;
}