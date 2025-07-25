#include <stdio.h>

int main() {
    int a, originalnum,count,rev=0;
	
	printf("Enter a number :");
	scanf("%d",&a);
	
	originalnum=a;
		while(a!=0){
			count = a%10;
			rev = rev*10+count;
			a /=10;
		}
		printf("Reverse of a number is %d",rev);
}
