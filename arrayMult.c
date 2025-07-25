#include<stdio.h>
int main(){
    int a[2][2];
    int b[2][2];
    int mult[2][2]={0};


        printf("For matrix A\n");
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                printf("Enter Value for row %d and column %d :\n",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        printf("For matrix B\n");
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                printf("Enter Value for row %d and column %d :\n",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                for(int k=0; k<2; k++){
                    mult[i][j]+=a[i][k] * b[k][j];
                }
            }
        }
        printf("Multiplication for matrix A & B is \n");
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                printf("%d ",mult[i][j]);
            }
            printf("\n");
        }
}