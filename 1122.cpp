#include<stdio.h>
int main(){
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	int primeNum=1;
	
		if (num == 2){
			primeNum=1;
		}
		else if (num%2 == 0){
			primeNum=0;
		}else{
			for(int j=3; j*j<=num; j +=2){
				if (num%j==0){
					primeNum=0;
					break;
				}
			}
		}
		if(primeNum == 0){
			printf("Number is not Prime");
		}else if(primeNum == 1){
			printf("Number is Prime");
		}
}
