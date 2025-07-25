#include<stdio.h>
int main(){
    char ch;
    printf("Enter your program :");
    
        while(1){
            scanf(" %c",& ch);
            if(ch=='\n'){
                break;
            }
            printf(" %c",ch);
        }
}