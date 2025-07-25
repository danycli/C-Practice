#include <stdio.h>
int main() {
    int numbers[8];
    int sum = 0;
    float average;
    printf("Enter 8 integers:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    average = sum / 8;
    printf("Average: %f", average);
    return 0;
}