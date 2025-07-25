#include <stdio.h>
int main() {
    int a[5] = {23, 5, 65, 12, 69};
    int b[5];

    for (int i = 0; i < 5; i++) {
        b[i] = a[i];
    }
    for (int i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }
    for (int j = 0; j < 5; j++) {
        printf("%d ", b[j]);
    }
}

