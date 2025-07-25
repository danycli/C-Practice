#include<stdio.h>
int main(){
	int a, rev=0, num;
	printf("Enter a number :");
	scanf("%d",&a);
	
		while(a!=0){
			num = a % 10;
			rev = rev*10 + num;
			a/=10;
		}
		printf("%d",rev);
}
