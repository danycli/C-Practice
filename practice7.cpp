#include<stdio.h>
int main(){
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	
		if(a==2){
			printf("%d is a Prime Number",a);
			return 0;
		}
	
		if(a%2==0 || a<2){
			printf("%d is not a Prime Number",a);
			return 0;
		}
		int isPrime=1;
		for(int j=3; j*j<=a; j++){
			if(j%a==0){
				isPrime=0;
			}else if(j%a!=0){
				isPrime=1;
			}
		}
	if(isPrime==1){
		printf("%d is a Prime Number\n",a);
	}else if(isPrime==0){
		printf("%d is not a Prime Number\n",a);
	}
}
