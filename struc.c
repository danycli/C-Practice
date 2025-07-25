#include<stdio.h>
#include<string.h>

struct stdudent{
    int a;
    float b;
    char c [100];
};

int main(){
    // s.1=instance..
    struct stdudent s1; 
    printf("Enter your marks :");
    scanf("%d",&s1.a);
    printf("Enter your cgpa :");
    scanf("%f",&s1.b);
    // scanf("%s",&s1.c);
    printf("Enter your Name :");
    fgets(s1.c,sizeof(s1.c),stdin);

    printf("Name =%s\n",s1.c);
    printf("Roll =%d\n",s1.a);
    printf("Cgpa =%f\n",s1.b);
}