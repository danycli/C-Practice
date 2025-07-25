#include<stdio.h>
//The process in which function calls it self again and again is called recursion.
//Recursion is a stack of function calls.
//Forward phase...Unwinding phase.
void countdown(int n){//base case
    if(n==0){
        return;
    }
    printf("%d\n",n);
    countdown(n-1);//recursive case
}
int main(){
    countdown(5);
    
}