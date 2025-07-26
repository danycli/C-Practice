#include<stdio.h>
int main(){
    int num = 123;
    int n = 0; 
    while(num!=0){
        num /= 10;
        n++;
    }
    printf("%d",n);
}