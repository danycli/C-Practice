#include<stdio.h>

int fib(int n){
    if( n <= 1 ){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    printf("Fibonacci is:\n");
    for(int i=0; i<5; i++){
        printf("%d\n",fib(i));
    }
}