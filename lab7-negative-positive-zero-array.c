#include <stdio.h>
int main() {
    int numbers[5];
    int positive = 0, negative = 0, zero = 0;
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] > 0){
            positive++;
        }
        else if (numbers[i] < 0){
            negative++;
        }
        else{
            zero++;
        }
    }
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeros: %d", zero);
    return 0;
}
