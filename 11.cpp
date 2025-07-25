#include<stdio.h>
int main(){
	int m, n;
	printf("Enter two numbers :");
	scanf("%d %d", &m, &n);
	printf("Enter OPeration :");
	char ch;
	scanf(" %c", &ch);
	
	switch(ch){
		case '*': printf("%d\n", n*m);
		break;
		default : printf("Invalid Operation");
	}
}
