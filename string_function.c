#include<stdio.h>
#include<string.h>

int main(){
    char ch[]="Hello Saad bro...!";
    char a[50];
    strcpy(a,ch);
    printf("Original = %s\n",ch);
    printf("Copied = %s",a);
}