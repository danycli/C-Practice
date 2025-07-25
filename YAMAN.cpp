#include<stdio.h>
int main(){
	int m[3][3]={{3,5,3},{6,3,7},{7,3,6}};
	
		for(int i=0; i<=2; i++){
			for(int j=0; j<=2; j++){
				printf("%d ",m[i][j]);
			}
			printf("\n");
		}
}
