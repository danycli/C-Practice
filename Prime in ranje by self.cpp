#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	printf("Enter First number :");
	scanf("%d",&a);
	printf("Enter Second number :");
	scanf("%d",&b);
	
		for(int j=a; j<=b; j++){
			if(j<2){
				continue;
			}
			
	int isPrime = 1;
		
		for(int i=2; i<=sqrt(j); i++){
			if(j%i==0){
				isPrime=0;
				break;
			}
		}
			if(isPrime){
				printf("%d\n",j);
			}
		}
	
}
