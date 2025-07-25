#include<stdio.h>
int main(){
    int a[4][3];
    int b[2][3];
    int c[4][3]={0};

        for(int i=0; i<4; i++){
            for(int j=0; j<3; j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("\n");
        for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                scanf("%d",&b[i][j]);
            }
        }
        printf("\n");
        for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("\n");
        for(int i=0; i<4; i++){
            for(int j=0; j<3; j++){
                c[i][j]=a[i][j];
            }
        }
        printf("\n");
        for(int i=0; i<4; i++){
            for(int j=0; j<3; j++){
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
}