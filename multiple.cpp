#include<stdio.h>
int main(){
	int mult =1;
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			printf("%d ",j*i);
		}
		printf("\n");
	}
}
