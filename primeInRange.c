#include<stdio.h>
void prime(int n, int b){
    int isprime=1;
    for(int i=n; i<=b; i++){
        if(i==2){
            isprime=1;
        }
        if(i<2){
            isprime=0;
        }
        for(int j=3; j<=i*i; j++){
            if(j%i==0){
                isprime=0;
                break;
            }
        }
        if(isprime == 1){
            printf("%d \n",i);
        }
    }
}
int main(){
    int a,b;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    prime(a,b);
}