#include<stdio.h>
int main(){
    int a[5][3];
    int sum[1][1]={0};
    int sum1[1][1]={0};
    int sum2[1][1]={0};

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
        for(int i=0; i<5; i++){
            sum[0][0]+=a[i][0];
            sum1[0][0]+=a[i][1];
            sum2[0][0]+=a[i][2];
        }
        printf("\n");
        printf("Total:-         %d      %d      %d",sum[0][0],sum1[0][0],sum2[0][0]);
}