// #include <stdio.h>

// void positive(int *a, int size1)
// {
//     int pos = 0, neg = 0;
//     for (int i = 0; i < size1; i++)
//     {
//         if (a[i] >= 0)
//         {
//             pos++;
//         }
//         else
//         {
//             neg++;
//         }
//     }
//     printf("Negative = %d\nPositive = %d", neg, pos);
// }

// int main()
// {
//     int a[] = {-1, 4, -2, 5, 8};
//     size_t size = sizeof(a) / sizeof(a[0]);
//     int size1 = size;
//     positive(a, size1);
//     return 0;
// }

// #include <stdio.h>

// void rev(int *a, int size1)
// {
//     int temp;
//     for (int i = 0; i < size1 / 2; i++)
//     {
//         temp = a[i];
//         a[i] = a[size1 - 1 - i];
//         a[size1 - 1 - i] = temp;
//     }
// }

// int main()
// {
//     int a[] = {1, 2, 3, 4};
//     size_t size = sizeof(a) / sizeof(a[0]);
//     int size1 = size;
//     rev(a, size1);
//     for (int i = 0; i < size1; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }
//Shift Elements Right by 1
// #include<stdio.h>

// void right(int *a, int size1){
//     int temp = a[size1 -1];
//     for(int i = size1 -1; i > 0; i--){
//         a[i] = a[i-1];
//     }
//     a[0] = temp;
// }

// int main()
// {
//     int a[] = {1,2,3,4,5};
//     size_t size = sizeof(a)/sizeof(a[0]);
//     int size1 = size;
//     right(a,size1);
//     for(int i = 0; i < size1; i++){
//         printf("%d ",a[i]);
//     }
// return 0;
// }
// Shift Elements Left by 1
// #include<stdio.h>

// void left(int *a, int size1){
//     int temp = a[0];
//     for(int i = 0; i < size1; i++){
//         a[i] = a[i+1];
//     }
//     a[size1-1] = temp;
// }

// int main()
// {
//     int a[] = {1,2,3,4,5};
//     size_t size = sizeof(a)/sizeof(a[0]);
//     int size1 = size;
//     left(a,size1);
//     for(int i = 0; i < size1; i++){
//         printf("%d ",a[i]);
//     }
// return 0;
// }

#include<stdio.h>

void rev(int*a, int size1){
    int temp;
    for(int i = 0; i < size1/2; i++){
        temp = a[i];
        a[i] = a[size1 -1 -i];
        a[size1 -1 -i] = temp;
    }
}

int main()
{
    int a[] = {1,2,3,4,5};
    size_t size = sizeof(a)/sizeof(a[0]);
    int size1 = size;
    rev(a,size1);
    for(int i = 0; i < size1; i++){
        printf("%d ",a[i]);
    }
return 0;
}