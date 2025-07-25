#include<stdio.h>
void hellow(int count){
    if(count == 0){
        return;
    }
    printf("Hello World\n");
    hellow(count-1);
}
int main(){
    hellow(9);
    return 0;
}