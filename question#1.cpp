#include<stdio.h>
int main(){
	int a=5;
	
		for(int i=a; i>=1; i--){
			for(int j=i; j>=1; j--){
				printf("%d",j);
			}
			printf("\n");
		}
}
