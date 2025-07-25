//2D Array printing and transpose....

// #include<stdio.h>
// int main(){
//     int r [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             printf("%d",r[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n\nNow Transpose\n\n");
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             printf("%d",r[j][i]);
//         }
//         printf("\n");
//     }
// }
//2D Array sum......
// #include<stdio.h>
// int main(){
//     int a[2][2];
//     int b[2][2];
//     int sum[2][2];
//     printf("\nFor Matrix A\n");
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             printf("Enter a number for row %d and coloumn %d ",i,j);
//             scanf("%d ",&a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nFor Matrix B\n");
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             printf("Enter a number for row %d and coloumn %d ",i,j);
//             scanf("%d ",&b[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             sum[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     printf("\nSum of Matrix A and B\n");
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             printf("%d ",sum[i][j]);
//         }
//         printf("\n");
//     }
// }

//Multiplication of the 2D Arrays
// #include<stdio.h>
// int main(){
//     int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int b[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int mult [3][3] = {0};
    
//         for(int i=0; i<3; i++){
//             for(int j=0; j<3; j++){
//                 for(int k=0; k<3; k++){
//                     mult[i][j] += a[i][k] * b[k][j];
//                 }
//             }
//         }
//         for(int i=0; i<3; i++){
//             for(int j=0; j<3; j++){
//                 printf("%d ",mult[i][j]);
//             }
//             printf("\n");
//         }
// }

//Student Info
// #include<stdio.h>
// int main(){
//     int a[4][2];
//     for(int i=0; i<4; i++){
//         for(int j=0;j<2; j++){
//             printf("Enter marks for %d student of %d subject :",i+1,j+1);
//             scanf("%d ",&a[i][j]);
//         }
//     }
//     for(int i=0; i<4; i++){
//         printf("Student %d ",i+1);
//         for(int j=0; j<2; j++){
//             printf("Subject %d :",j+1);
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
// }
// }