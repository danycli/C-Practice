#include<stdio.h>
#include<string.h>

float findMax(float *arr, int size) {
    float max = *arr;
    for(int i = 1; i < size; i++) {
        if(*(arr + i) > max) max = *(arr + i);
    }
    return max;
}

int main() {
    float arr[5];
    for(int i = 0; i < 5; i++) scanf("%f", &arr[i]);
    printf("Maximum value: %.2f\n", findMax(arr, 5));
    return 0;
}