#include<stdio.h>
#include<math.h>

int rev(int a){
    int b,c=0;
    while(a!=0){
        b = a%10;
        c+=b;
        a/=10;
    }
    return c;
}
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("The sum of the numbers is :%d",rev(a));
}