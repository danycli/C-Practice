#include<stdio.h>
int main(){
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	
	int isprime=1;
		if(a==2 || a<=0){
			isprime=0;
		}else if(a%2==0){
			isprime=0;
		}else{
		for(int i=1; i*i<=a; i++){
			if(i%a==0){
				isprime=0;
				break;
			}
		}
	}
	if(isprime){
		printf("%d is a prime number",a);
	}else{
		printf("%d is not a prime number",a);
	}
}
