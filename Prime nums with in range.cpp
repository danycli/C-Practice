#include<stdio.h>
int main(){
		
	for (int j=1; j<=50; j++){
		if(j<2){
			continue;
		}
	
	int isPrime=1;
	
	for (int i=2; i=j/2; i++){
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
