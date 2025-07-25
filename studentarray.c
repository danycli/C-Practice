#include<stdio.h>
int main(){
    int a[10][7];

        for(int i=0; i<5; i++){
            printf("Enter marks of student %d for 3 subjects:",i+1);
            for(int j=0; j<3; j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("\t  Subject 1  Subject 2  Subject 3\n");
        for(int i=0; i<5; i++){
            printf("Student %d\t",i+1);
            for(int j=0; j<3; j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
}