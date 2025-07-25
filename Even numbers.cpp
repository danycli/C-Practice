#include<stdio.h>
int main(){
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	int b = a % 2;
	if (b==0)
	{
		printf("%d",a);
		printf(" Is an even number");
	}
	else if (b!=0)
	{
		printf("%d",a);
		printf(" Is an odd number");
	}
}
