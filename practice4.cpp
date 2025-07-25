#include<stdio.h>
int main(){
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	
			int mult;
	
		for(int j=1; j<=10; j++){
			mult = j*a;
			printf("%d x %d = %d\n",a,j,mult);
		}
	
}
