#include <stdio.h>
int main() {
    int numbers[5];
    int even = 0, odd = 0;
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d", odd);
    return 0;
}
