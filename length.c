#include<stdio.h>
#include<string.h>
int main(){
    char ch [100];
    printf("Enter a string :");
    // scanf("%s",ch);
    // fgets(ch,sizeof(ch),stdin);

    int le = strlen(ch);
    
    for(int i = le -1; i >= 0; i--){
        printf("%c", ch[i]);
    }
}