#include<stdio.h>
int main(){
	int rows, cols;
	printf("Enter number Rows :");
	scanf("%d",&rows);
	printf("Enter number Coloumns :");
	scanf("%d",&cols);
	
		for(int i=1; i<=rows; i++){
			for(int j=1; j<=cols; j++){
			
			if(i==1 || i==rows || j==1 || j==cols){
				printf("* ");
			}else{
				printf("  ");
			}
			}
			printf("\n");
		}
}
