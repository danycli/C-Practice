#include<stdio.h>
int main(){
	int a=2, b=45;
	int isprime=1;
	
		for(int i=a; i<=b; i++){
			if(i<2){
				isprime=0;
			}
			isprime=1;
			for(int j=2; j*j<=i; j++){
				if(i%j==0){
					isprime=0;
					break;
				}
			}
			if(isprime){
				printf("%d ",i);
			}
		}
}
