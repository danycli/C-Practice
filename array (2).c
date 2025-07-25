//Write a program to input 10 numbers in an array and display them in reverse order

// #include<stdio.h>
// int main(){
//     int a [10];
//     printf("Enter 10 numbers");
//     for(int i=0; i<10; i++){
//         scanf("%d",&a[i]);
//     }
//     for(int j=9; j>=0; j--){
//         printf("%d ",a[j]);
//     }
// }

//Write a program to input 5 integers in an array and count how many of them are even
//and how many are odd.

// #include<stdio.h>
// int main(){
//     int a [5],even=0,odd=0;
//     for(int i=0; i<5; i++){
//         scanf("%d",&a[i]);
//     }
//     for(int j=0; j<5; j++){
//         if(a[j]%2==0){
//             even++;
//         }else{
//             odd++;
//         }
//     }
//     printf("%d are even \n%d are odd",even,odd);
// }

//Write a program that finds the maximum and minimum values from a user-defined
//array of 6 elements.

// #include<stdio.h>
// int main(){
//     int a[5],max,min; 
//     for(int i=0; i<5; i++){
//         scanf("%d",&a[i]);
//     }
//     max = a[0];
//     min = a[0];
//     for(int j=0; j<5; j++){
//         if(a[j]>max){
//             max = a[j];
//         }
//         if(a[j]<min){
//             min = a[j];
//         }
//     }
//     printf("Max value is %d\n",max);
//     printf("Min value is %d\n",min);
// }
// FOR SECOND MAX IN ARRAY

// #include<stdio.h>
// int main(){
//     int a[5],max, sec;
//     for(int i=0; i<5; i++){
//         scanf("%d",&a[i]);
//     }
//     if(a[0]>a[1]){
//         max=a[0];
//         sec=a[1];
//     }
//     else if(a[0]<a[1]){
//         max=a[1];
//         sec=a[0];
//     }
//     for(int j=2; j<5; j++){
//         if(a[j]>max){
//             sec = max;
//             max = a[j];
//         }
//         else if(a[j]>sec){
//             sec = a[j];
//         }
//     }
//     printf("Max value is %d\n",max);
//     printf("Second Max value is %d",sec);
// }

//Write a program to calculate and display the average of all numbers in an array of 8
//integers.
// #include<stdio.h>
// int main(){
//     int a[8]= {7,5,3,9,7,5,0,4},sum=0;
//     for(int i=0; i<8; i++){
//         sum+=a[i];
//     }
//     printf("The average of the numbers of the arrays is %d",sum/8);
// }

//Write a program that takes 7 values from the user, stores them in an array, and then
//prints only those values that are divisible by 3.
// #include<stdio.h>
// int main(){
//     int a[7];
//     for(int i=0; i<7; i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0; i<7; i++){
//         if(a[i]%3==0){
//             printf("%d ",a[i]);
//         }
//     }
// }

//Write a program that copies the contents of one array into another and then prints
//both arrays.

// #include<stdio.h>
// int main(){
//     int a[5] = {5,3,6,2,6};
//     int b[5];
//     printf("First array before copying\n");
//     for(int i=0; i<5; i++){
//         printf("%d ",a[i]);
//     }
//     for(int i=0; i<5; i++){
//         b[i]=a[i];
//     }
//     printf("\nSecond array after copying\n");
//     for(int i=0; i<5; i++){
//         printf("%d ",b[i]);
//     }
// }

//Write a program that allows the user to input 5 values, then search for a specific
//number in that array and print its index if found.
// #include<stdio.h>
// int main(){
//     int a[5] = {23,4,5,23,6};
//     int b = 6;
//     for(int i=0; i<5; i++){
//         if(a[i]==b){
//             printf("\nThe desired number found at %d\n",i);
//             break;
//         }
//     }
// }

//Write a program to input 5 numbers in an array and print only the prime numbers
//from it

// #include<stdio.h>
// int main(){
//     int isprime=1;
//     int a[5] = {8,9,10,4,12};
//     for(int i=0; i<5; i++){
//         for(int j=1; j*j<=a[i];j++){
//                 if(a[i]%j==0){
//                     isprime=0;
//                     break;
//                 }
//         }
//         if(isprime == 1){
//             printf("%d ",a[i]);
//         }
//     }
// }

