#include<stdio.h>
int main(){
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	
	   int mult=1;
	   
		for(int j=1; j<=n; j++){
			mult *=j;
		}   
	printf("Factorial of %d is %d",n,mult);
}
