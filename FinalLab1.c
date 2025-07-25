#include<stdio.h>
#include<string.h>

int findMin(int arr[], int size) {
    int min = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < min) min = arr[i];
    }
    return min;
}

int main() {
    int a[3] = {7, 8, 6};
    printf("%d is the smallest number", findMin(a, 3));
    return 0;
} 