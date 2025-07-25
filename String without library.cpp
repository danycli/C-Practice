#include<stdio.h>
int main(){
	char ch;
	printf("Write a sentence :");
//	scanf("%c",&ch);
	
		while(1){
			scanf("%c",&ch);
			if(ch == '\n'){
				break;
			}
			printf("%c",ch);
		}
}
