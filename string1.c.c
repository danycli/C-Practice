#include<stdio.h>
#include<string.h>

int main(){
    char ch[20];
    fgets(ch,sizeof(ch),stdin);
    char a[50];
    strcpy(ch, a);
    printf("original = %s",ch);
    printf("Copied = %s",a);
}
