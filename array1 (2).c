#include <stdio.h>

int main() {
    int a[3][3] = {{2, 3, 4}, {2, 5, 2}, {2, 5, 4}};
    int b[3][3] = {{2, 3, 4}, {2, 5, 2}, {2, 5, 4}};
    int mult[3][3] = {0};

    printf("Matrix A:\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResult Matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}
