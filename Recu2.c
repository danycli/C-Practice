#include<stdio.h>

int we(int a){
    if(a<2){
        return a;
    }
    return we(a-1) + we(a-2);
}
int main(){
    int a =5;
    for(int i=0; i<a; i++){
        printf("%d  ",we(i));
    }
}