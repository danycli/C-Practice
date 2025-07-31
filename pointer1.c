#include<stdio.h>

void poin(int *p){
    int temp = 7;
    *p = temp;
}

int main(){
    int a = 3;
    int *p = &a;
    printf("%d\n",*p);
    poin(p);
    printf("%d",a);
}