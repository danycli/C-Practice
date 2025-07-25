#include<stdio.h>
int main(){
	int a,b;
	char c;
	printf("Enter the equation :");
	scanf("%d %c %d",&a ,&c ,&b);
		switch(c){
			case '+':
				printf("sum is %d",a+b);
			break;
			case '*':
				printf("sum is %d",a*b);
			break;
			case '/':
				printf("sum is %d",a/b);
			break;
			case '-':
				printf("sum is %d",a-b);
			break;
			default:
				printf("Invalid Equation!");
		}
}
