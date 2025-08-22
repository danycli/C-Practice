#include<stdio.h>
#include<conio.h>
struct student{
    char name[100];
    int rollNo;
    float marks;
};
int main()
{
    struct student s1;
    printf("Enter your Name :");
    fgets(s1.name,sizeof(s1.name),stdin);
    printf("Enter your Roll no:");
    scanf("%d",& s1.rollNo);
    printf("Enter your Marks :");
    scanf("%f",& s1.marks);

    printf("Do you want to see the data of the student.... ?\ny/n");
    char i;
    i = getch();

    if(i == 'y'){
        printf("\nName = %s\n", s1.name);
        printf("Roll no : %d\n",s1.rollNo);
        printf("Marks = %f\n",s1.marks);
    }
    else if(i == 'n'){
        return 0;
    }
    else{
        printf("\nInvalid Input!");
    }
return 0;
}