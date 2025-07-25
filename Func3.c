#include<stdio.h>

void temp(){
    int a[3][3]={{3,2,4},{3,3,5},{4,3,5}};
    int b[3][3]={{3,2,4},{3,3,5},{2,5,1}};
    int c[3][3]={0};

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
int main(){
    temp();
}