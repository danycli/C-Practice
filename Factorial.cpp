#include<stdio.h>
int main(){
	int n,fact=1;
	printf ("Enter a number:");
	scanf("%d",&n);
	for (int j=1; j<=n; j++){
		fact = fact * j;
	}
	printf("Factorial of %d is %d",n,fact);
	return 0;
}
