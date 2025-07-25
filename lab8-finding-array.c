#include <stdio.h>
int main() {
    int a[5], num = 25;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (a[i] == num) {
            printf("Found at index %d\n", i);
            return 0;
        }
    }
    printf("Not found\n");
    return 0;
}
