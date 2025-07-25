#include<stdio.h>
int main(){ 
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (int t=1; t<=10; t++){
		printf("%d x %d = ",n,t);
		//printf("=%d",t);
		printf("%d\n",n*t);
	}
}
