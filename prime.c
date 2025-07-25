#include<stdio.h>
void prime(int n){
    int isprime=1;

    if(n==2){
        isprime = 1;
    }

    if (n<2)
    {
        isprime=0;
    }
    for(int a=2; a*a<=n; a++){
        if(n%a==0){
            isprime=0;
            break;
        }
    }
    if(isprime == 1){
        printf("%d is a prime number\n",n);
    }else{
        printf("%d is not a prime number\n", n);
    }
}
int main(){
    int n;
    printf("Enter a number to check for prime or not \nOr enter 0 to exit..\n");
    while(1){
        printf("Choose:");
        scanf("%d",&n);
        if(n==0){
            break;
        }else{
            prime(n);
        }
    }
    printf("Thanks for Using our Prime number Checker.......");
}