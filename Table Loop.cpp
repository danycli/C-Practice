#include<stdio.h>
int main(){
	int num;
	printf("Enter a Number :");
	scanf("%d",&num);
	int isPrime=1;
	if (num == 2){
		isPrime=1;
	}
	else if (num<=1){
		isPrime=0;
	}
	if (num%2==0){
		isPrime=0;
	}else{
		for (int j=3; j*j<=num; j+=2){
			if (num%j==0){
				isPrime=0;
				break;
			}
		}
	}
		if (isPrime==1){
			printf("%d is a Prime Number",num);
		}
		else if(isPrime==0){
			printf("%d is not a Prime Number",num);
		}
		return 0;
}
