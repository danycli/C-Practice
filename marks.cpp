#include<stdio.h>
int main(){
	int a[3][3];
	int b[3][3];
	int sum[3][3];
	
	printf("For first matrice\n");
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				scanf("%d ",&a[i][j]);
		}
	}
	printf("For second matrice\n");
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				scanf("%d ",&b[i][j]);
		}
	}
	
		for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d     ", sum[i][j]);
        }
        printf("\n");
    }
}
