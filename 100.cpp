#include<stdio.h>
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
		if(n<0){
			printf("Number is negative");
		}else{
			if(n>0){
				printf("Number is positive\n");
			}
		}
		if(n>100){
			printf("Large positive");
		}else{
			printf("Small positive");
		}
		return 0;
}
