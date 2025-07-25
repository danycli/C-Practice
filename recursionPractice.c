#include<stdio.h>

int sum(int a){
    if(a==0){
        return 0;
    }
    return a+ sum (a-1);
}
int main(){
    int result=sum(5);
    printf("Sum is %d",result);
    return 0;
}