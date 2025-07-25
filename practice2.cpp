#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers :");
	scanf("%d %d",&a,&b);
	
		for(int j=a; j<=b; j++){
			if(j<2){
				continue;
			}
//			else if(j%2==0){
//				continue;
//			}
			int isPrime =1;
		for(int i=2; i*i<=j; i++){
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
