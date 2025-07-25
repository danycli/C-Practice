#include <stdio.h>
int main() {
    int numbers[6];
    int max, min;
    printf("Enter 6 numbers:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &numbers[i]);
    }
    max = numbers[0];
    min = numbers[0];
    for (int i = 1; i < 6; i++) {
        if (numbers[i] > max)
            max = numbers[i];
        if (numbers[i] < min)
            min = numbers[i];
    }
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d", min);
    return 0;
}
