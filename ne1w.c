#include<stdio.h>
struct employee{
    float salary;
    int id;
    char name [100];
};

int main()
{
    struct employee em;
    printf("Enter your details ");
    printf("\nEnter your name :");
    fgets(em.name,sizeof(em.name),stdin);
    printf("Enter your ID :");
    scanf("%d",&em.id);
    printf("Enter your Salary :");
    scanf("%f",&em.salary);
    printf("\n\n---Employee Details---\n");
    printf("Name = %s",em.name);
    printf("ID = %d\n",em.id);
    printf("Salary = %f\n",em.salary);
return 0;
}