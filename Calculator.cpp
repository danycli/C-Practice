#include<stdio.h>
int main(){
	printf("Simple Calculator\n");
	printf("1.+\n2.-\n3.*\n4./\n");
	printf("Enter the operation you want to perform :");
	char a;
	scanf("%d",&a);
	if (a>=5){
		printf("Invalid Operation...");
		return 0;
	}
	int num_1;
	printf("Enter first number :");
	scanf("%d",&num_1);
	int num_2;
	printf("Enter second Number :");
	scanf("%d",&num_2)
	if (a=='+'){
		printf("Sum is :%d\n",sum);
		printf("Thank You....");
		return 0;
	}
	else if (a=='-'){
		printf("Subtraction is :%d\n",sub);
		printf("Thank You....");
		return 0;
	}
	else if (a=='*'){
		printf("Multiplication is :%d\n",mult);
		printf("Thank You....");
		return 0;
	}
	else if (a=='/'){
		printf("Division is :%d\n",div);
		printf("Thank You....");
		return 0;
	}else
		printf("Invalid Operation...");
	}
	return 0;
}


