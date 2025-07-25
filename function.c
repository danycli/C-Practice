//Write a program that takes an array of integers from the user and finds the second-largest
//element using a separate function.
// #include<stdio.h>

// void second(int a[5]){
//     int max, sec;
//     if(a[0]>a[1]){
//         max = a[0];
//         sec = a[1];
//     }
//     else if(a[0]<a[1]){
//         max = a[1];
//         sec = a[0];
//     }
//     for(int i=2; i<=5; i++){
//         if(a[i]>max){
//             sec = max;
//             max = a[i];
//         }
//         else if(a[i]>sec){
//             sec =a[i];
//         }
//     }
//     printf("Seconf max num is %d",sec);
// }
// int main(){
//     int a[5] = {4,6,3,9,3};
//     second(a);
// }

//Create a function that takes an array and its size and returns the average of the elements
//using pointer notation.
// #include<stdio.h>
// int avg(int *a, int b){
//     int sum = 0;
//     for(int i=0; i<b; i++){
//         sum+=*(a+i);
//     }
//     return sum/b;
// }
// int main(){
//     int a[8] = {3,5,2,5,1,3,5,4};
//     int size = 8;
//     printf("Average of the numbers is %f",avg(a,size));
// }

//Write a recursive function to calculate the greatest common divisor (GCD) of two numbers
//using the Euclidean algorithm
// #include<stdio.h>
// int euc(int a, int b){
//     if(b == 0){
//         return a;
//     }
//     while(b!=0){
//         int r = a%b;
//         a = b;
//         b = r;
//     }
//     return a;

// }
// int main(){
//     int a = 48, n=18;
//     printf("The GDC of %d and %d is %d",a,n,euc(a,n));
// }

//Write a function that takes an array of integers and returns the smallest element in the
//array.
// #include<stdio.h>
// int small(int a[5]){
//     int smal = a[0];
//     for(int i=0; i<5; i++){
//         if(a[i]<smal){
//             smal = a[i];
//         }
//     }
//     return smal;
// }
// int main(){
//     int a[5] = {6,5,4,2,6};
//     printf("The smallest num in the array is %d",small(a));
// }

//Write a function using pointers to reverse the elements of an integer array in-place.
