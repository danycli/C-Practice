#include<stdio.h>

void grade(){
    int b[5][3];
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            printf("Enter marks of subject %d of student %d :",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<5; i++){
        printf("Student %d:",i+1);
        for(int j=0; j<3; j++){
            printf("Subject %d =",j+1);
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}
int main(){
    grade();
}