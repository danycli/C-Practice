#include<stdio.h>
int fac(int n){
    if(n==0){
        return 1;
    }else {
        return n * fac(n-1);
    }
}
int main(){
    int num =5;
    printf("fact of %d is %d\n",num,fac(num));
    return 0;
}