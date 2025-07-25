#include<stdio.h>
#include<string.h>

void reverse(int *arr, int size) {
    int i = 0, j = size - 1, temp;
    while(i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int arr[5], i;
    for(i = 0; i < 5; i++) scanf("%d", &arr[i]);
    reverse(arr, 5);
    for(i = 0; i < 5; i++) printf("%d ", arr[i]);
    return 0;
}