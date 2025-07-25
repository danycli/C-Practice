// #include<stdio.h>
// int main(){
//     for(int i=1; i<=4; i++ ){
//         for(int j = 1; j <=8; j++){
//             printf("+ ");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     for(int i=1; i<=6; i++ ){
//         for(int j = 1; j <= 7-i; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     for(int i=1; i<=6; i++ ){
//         for(int j = 0; j < i; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
// 	for(int i = 1; i <= 5; i++){
//         for(int space = 1; space <= 5 - i; space++) {
//             printf(" ");
//         }
//         for(int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for(int i = 5; i >= 1; i--){
//         for(int space = 1; space <= 5 - i; space++) {
//             printf(" ");
//         }
//         for(int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     for(int i=1; i<=5; i++){
//         for(int a=1; a<=5-i; a++){
//             printf(" ");
//         }
//         for(int j=1; j<=i; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for(int u=5; u>=1; u--){
//         for(int p=5-u; p>=1;p--){
//             printf(" ");
//         }
//         for(int g=u; g>=1; g--){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
// Printing a hollow rectangle
// #include<stdio.h>
// int main(){
//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=8; j++){
//             if(i==1 || i==5 || j==1 || j==8){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }

//Print a pyramid of numbers with increasing values in each row.
// #include<stdio.h>
// int main(){
//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=i; j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// }
//Display multiplication results in a grid format from 1 to 5.
// #include<stdio.h>
// int main(){
//     for(int i=1; i<=5; i++){
//         for(int j=1;j<=5; j++){
//             printf("%d ",i*j);
//         }
//         printf("\n");
//     }
// }
//Display prime numbers from 1 to 50 in 5 rows using nested loops and if condition.
// #include<stdio.h>
// int main(){
//     for(int i=2; i<=50; i++){
//         int isprime = 1;
//         for(int j=2; j*j<=i; j++){
//             if(i%j == 0){
//                 isprime = 0;
//                 break;
//             }
//         }
//         for(int z=1; z<=5; z++){
//             for(int d=1; d<=5; d++){
//                 if(isprime == 1){
//                 printf("%d ",i);
//                 }
//             }
//             printf("\n");
//         }
//     }
// }

// #include<stdio.h>
// int main(){
//     int a,num;
//     printf("Enter 1st num :");
//     scanf("%d",&a);
//     num = a;
//     for(int i=2; i<=5; i++){
//         printf("Enter %d number",i);
//         scanf("%d",&a);

//         if(a>num){
//             num = a;
//         }
//     }
//     printf("%d is the largest num",num);
// }