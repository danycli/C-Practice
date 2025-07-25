#include<stdio.h>
int main(){
	int a[5][5];
	int sum1[5][5];
	int b[5][5];
	int sum2[5][5];
		//Getting input from user......
		for(int i=0; i<=4; i++){
			for(int j=0; j<=4; j++){
				printf("Enter a number for row %d and column %d :",i,j);
				scanf("%d",&a[i][j]);
			}
			printf("\n \n");
		}
		//printing matrix 1st......
		printf("Simple Matrix\n");
		for(int i=0; i<=4; i++){
			for(int j=0; j<=4; j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		//Transpose of 1st matrix.....
		printf("Transpose of the matrix\n");
		for(int i=0; i<=4; i++){
			for(int j=0; j<=4; j++){
				printf("%d ",a[j][i]);
			}
			printf("\n");
		}
		printf("\n \n");
		//Getting input from user......
		for(int i=0; i<=4; i++){
			for(int j=0; j<=4; j++){
				printf("Enter a number for row %d and column %d :",i,j);
				scanf("%d",&b[i][j]);
			}
			printf("\n \n");
		}
		//printing matrix 2nd......
		printf("Simple 2nd Matrix\n");
		for(int i=0; i<=4; i++){
			for(int j=0; j<=4; j++){
				printf("%d ",b[i][j]);
			}
			printf("\n");
		}
		//Transpose of 2nd matrix.....
		printf("Transpose of the 2nd matrix\n");
		for(int i=0; i<=4; i++){
			for(int j=0; j<=4; j++){
				printf("%d ",b[j][i]);
			}
			printf("\n");
		}
		printf("\n \nSum of the Simple matrixes......\n");
		for(int i=0; i<=4; i++){
			for(int j=0; j<=4; j++){
				sum1[i][j]=a[i][j]+b[i][j];
				printf("%d ",sum1[i][j]);
			}
			printf("\n");
		}
		printf("\n \nSum of the Transpose matrixes......\n");
		for(int i=0; i<=4; i++){
			for(int j=0; j<=4; j++){
				sum2[i][j]=a[j][i]+b[j][i];
				printf("%d ",sum2[i][j]);
			}
			printf("\n");
		}
		
}
