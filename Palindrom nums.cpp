#include <stdio.h>

int main() {
    int a, originalnum,count,sum=0;
	
	printf("Enter a number :");
	scanf("%d",&a);
	
	originalnum=a;
		while(a!=0){
			count = a%10;
			a /=10;
			sum+=count;
		}
		printf("%d",sum);
//		if(count == a){
//			printf("The number is palindrom");
//		}else{
//			printf("The number is not palindrom");
//		}
}

