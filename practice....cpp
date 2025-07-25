#include<stdio.h>
int main(){
	int rows;
	int coloumns;
	char sym;
	
	printf("Enter number of rows :");
	scanf("%d",&rows);
	
	printf("Enter number of coloumns :");
	scanf("%d",&coloumns);
	
	printf("Enter the Symbol you want to print :");
	scanf(" %c",&sym);
	
		for(int i=1; i<=rows; i++){
			for(int j=1; j<=coloumns; j++){
				printf("*");
			}
			printf("\n");
		}
}
