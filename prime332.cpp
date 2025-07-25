#include <stdio.h>

int main() {
    for (int j = 2; j <= 50; j++) {
        int isPrime = 1;
        for (int i = 2; i*i <= j; i++) {
            if (j % i != 0) {
                isPrime = 0;
                printf("%d ", j);
//                break;
            }
        }
//        if (isPrime) {
//            printf("%d ", j);
//        }
    }
}
