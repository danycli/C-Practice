#include<stdio.h>
#include<conio.h>

struct multiple{
    char employeeName[100];
    int idNo;
    float salary;
};

int main()
{
    struct multiple m1[5];
    
    for(int i=1; i<=5; i++){
        printf("Enter Employee Name :");
        scanf(" %c",& m1->employeeName);
        printf("Enter Employee Id numbre :");
        scanf("%d",& m1->idNo);
        printf("Enter your Salary :");
        scanf("%f",& m1->salary);
    }

    for(int i=1; i<=5; i++){
        printf("Employee Name : %d")
    }

return 0;
}