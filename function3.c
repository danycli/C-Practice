#include<stdio.h>
void ch(){
    printf("Hi ");
}
void ab(){
    printf("how are you ");
}
void ad(){
    printf("boss....");
}
void fi(){
    ch();ab();ad();
}
int main(){
    fi();
}