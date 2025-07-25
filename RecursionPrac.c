// SUM OF NTH NATURAL NUMBERS
// #include<stdio.h>

// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     return n + sum(n-1);
// }
// int main(){
//     int a = 10;
//     printf("%d",sum(a));
// }

//Write a recursive function to calculate the factorial of a number. Example: Input = 5
//→ Output = 120
// #include<stdio.h>
// int fact(int a){
//     if(a==0){
//         return 1; 
//     }
//     return a * fact(a-1);
// }
// int main(){
//     int a=5;
//     printf("fact = %d",fact(a));
// }

// #include<stdio.h>

// int fib(int a){
//     if(a<=1){
//         return a;
//     }
//     return fib(a-1) + fib(a-2);
// }
// int main(){
//     int a =6;
//     printf("%d",fib(a));
// }

// #include<stdio.h>
// int fib(int a){
//     if(a<=1){
//         return a;
//     }
//     return fib(a-1) + fib(a-2);
// }
// int main(){
//     int a = 10;
//     for(int i = 0; i<=a; i++){
//         printf("%d  ",fib(i));
//     }
// }

// #include<stdio.h>
// void num(int a){
//     if(a>10){
//         return;
//     }
//     printf("%d ",a);
//     num(a+1);
// }
// int main(){
//     num(1);
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     system("color E");
//     printf("Hello world");
// }

// #include<stdio.h>

// void print(int a){
//     if(a<0){
//         return;
//     }
//     printf("%d ",a);
//     print(a-1);
// }
// int main(){
//     print(10);
// }

//Write a recursive function to compute the sum of the digits of a number. Example:
//Input = 123 → Output = 6
// #include<stdio.h>
// int sum(int a){
//     if(a == 0){
//         return 0;
//     }
//     return (a%10) + sum(a/10);
// }
// int main(){
//     int a = 123;
//     printf("The sum is %d",sum(a));
// }

//Write a recursive function to calculate the power of a number.
// #include<stdio.h>
// int square(int a, int b){
//     if(b == 0){
//         return 1;
//     }
//     return a*square(a,b-1);
// }
// int main(){
//     int a = 4;
//     int b = 2;
//     printf("the square of %d is %d",a,square(a,b));
// }
//Write a program that uses a recursive function to find the nth Fibonacci number.
// #include<stdio.h>
// int fib(int a){
//     if(a <= 1){
//         return a;
//     }
//     return fib(a-1) + fib(a-2);
// }
// int main(){
//     int a = 5;
//     printf("%d",fib(a));
// }

//Input a string and use a recursive function to count the number of vowels.
// #include<stdio.h>
// int vow(char *a){
//     if(*a == '\0'){
//         return 0;
//     }
//     int vowelss = (*a == 'a' || *a == 'e' || *a == 'i' || *a == 'o' || *a == 'u');
//         return vowelss + vow(a + 1);
// }
// int main(){
//     char ch [100];
//     fgets(ch, sizeof(ch),stdin);
//     printf("Number %d",vow(ch));
// }
//Write a recursive function to find the sum of the first n even numbers.
// #include<stdio.h>
// int even(int a){
//     if(a == 0){
//         return 0;
//     }
//         return a + even(a-2);
// }
// int main(){
//     int a=6;
//     printf("%d",even(a));
// }
// /Write a recursive function to count the number of digits in a given integer.
// #include<stdio.h>
// int dig(int a){
//     if(a < 10 && a > 0){
//         return 1;
//     }
//     return 1 + dig(a/10);
// }
// int main(){
//     int a=1234;
//     printf("%d",dig(a));
// }

//Write a recursive function to calculate the product of the first n natural numbers.
// #include<stdio.h>
// int fun(int a){
//     if(a==0){
//         return 1;
//     }
//     return a*fun(a-1);
// }
// int main(){
//     int a = 6;
//     printf("The multiplication of the numbers upto %d is %d",a,fun(a));
// }