#include<stdio.h>
void add(int a, int b){
    printf("Sum of %d and %d is %d",a,b,a+b);
}
void mult(int a, int b){
    printf("Multiplication of %d and %d is %d",a,b,a*b);
}
void div(int a, int b){
    printf("Division of %d and %d is %d",a,b,a/b);
}
void sub(int a, int b){
    printf("Subtraction of %d and %d is %d",a,b,a-b);
}
int main(){
    int a,b,x;
    printf("Enter the desired operation\n1.+\n2.-\n3.*\n4./\nChoose:");
    scanf("%d",&x);

    while(x<=0 || x>5){
        printf("Invalid number !\nTry again:");
        scanf("%d",&x);
    }
        printf("Enter first number :");
        scanf("%d",&a);
        printf("Enter second number :");
        scanf("%d",&b);
    switch(x){
        case 1:add(a,b);
        break;
        case 2:sub(a,b);
        break;
        case 3:mult(a,b);
        break;
        case 4:div(a,b);
        break;
        default:printf("You select invalid operation!");
    }
}