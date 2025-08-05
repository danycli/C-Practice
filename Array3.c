#include<stdio.h>

// int* mult(int *a,int size1){
//     for(int i = 0; i < size1; i++){
//         a[i] *=2;
//     }
//     return a;
// }

// int* odd(int *a , int size1){
//     for(int i = 0; i < size1; i++){
//         if(a[i]%2!=0){
//             a[i] = 0;
//         }
//     }
//     return a;
// }

int main()
{
    int a[] = {1,-2,3,4,5,6};
    //Double the Elements
    size_t size = sizeof(a)/sizeof(a[0]);
    int size1 = size;
//     mult(a,size1);
//     for(int i = 0; i < size1; i++){
//         printf("%d ",a[i]);
//     }
//Covert odds to zero
// odd(a,size1);
// for(int i = 0; i < size1; i++){
//     printf("%d ",a[i]);
// }
return 0;
}