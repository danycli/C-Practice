#include<stdio.h>
int main(){
	int a[3][4]={{2,3,4,5},{4,3,1,6},{7,5,3,7}};
	int b[4][3];
	
	for(int i=0; i<=2; i++){
			for(int j=0; j<=3; j++){
				printf("%d ",a[i][j]);	
			}
			printf("\n");
		}
	
		for(int i=0; i<=2; i++){
			for(int j=0; j<=3; j++){
				b[j][i]=a[i][j];
			}
		}
		printf("\n");
		for(int i=0; i<=3; i++){
			for(int j=0; j<=2; j++){
				printf("%d ",b[i][j]);	
			}
			printf("\n");
		}
}
