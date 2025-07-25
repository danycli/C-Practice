#include<stdio.h>
int main(){
    char c [100];
    printf("Enter a sentence");
    fgets(c,sizeof(c),stdin);

        for(int i=0; c[i] != '\0'; i++){
            if(c != ' '){
                printf("%c",c[i]);
            }
        }

}