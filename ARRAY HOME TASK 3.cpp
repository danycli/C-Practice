#include <stdio.h>

int main() {
    int arr[5], i, even = 0, odd = 0;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0) {
            even = even + 1;
        } else {
            odd = odd + 1;
        }
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}

