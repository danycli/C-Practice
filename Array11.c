#include <stdio.h>
int main()
{
    //Left Rotate Array by One Place
    // int a[] = {1, 2, 3, 4, 5};
    // size_t size = sizeof(a) / sizeof(a[0]);
    // int size1 = size;
    // int temp = a[0];
    // for(int i = 0; i < size1; i++){
    //     a[i] = a[i+1];
    //     a[size1 -1] = temp;
    //     printf("%d ",a[i]);
    // }
    // Remove Duplicates from Sorted Array(not solved... :( )
    // int a[] = {1,1,2,3,5,7,7,8,9,10,10};
    // int print = 0;
    // size_t size = sizeof(a)/sizeof(a[0]);
    // int size1 = size;
    //     for(int i = 0; i < size1 -1; i++){
    //     for(int j = i+1; j < size1; j++){
    //         if(a[i] == a[j]){
    //             print = 1;
    //         }else{
    //             print = 2;
    //         }
    //         if(print == 1){
    //             printf("%d ",a[j]);
    //             break;
    //         }
    //         if(print == 2){
    //             if(a[i-1] == a[j-1]){
    //                 break;
    //             }
    //             else{
    //                 printf("%d ",a[i]);
    //             }
    //             break;
    //         }
    //     }
    // }

    // Remove duplicates and return the new length
    // int a[] = {1, 2, 2, 2, 2, 2, 2, 2, 2},count=0;
    // size_t size = sizeof(a)/sizeof(a[0]);
    // int size1 = size;
    // for(int i = 0; i < size1 - 1; i++){
    //     for(int j = i+1; j < size1; j++){
    //         if(a[i] == a[j]){
    //             count++;
    //             break;
    //         }
    //     }
    // }
    // printf("New length = %d",size1-count);

    // Merge Two Sorted Arrays
    int a[] = {1,3,5,7},b[] = {1,2,3,9};
    size_t sizea = sizeof(a)/sizeof(a[0]);
    size_t sizeb = sizeof(b)/sizeof(b[0]);
    int size1 = sizea;
    int size2 = sizeb;
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(a[i] == b[j] || a[i] < b[j]){
                printf("%d %d ",a[i],b[j]);
                break;
            }
        }
    }
    return 0;
}