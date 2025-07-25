#include<stdio.h>
int main(){
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	int mult=0;
		for(int i=1; i<=10; i++){
			mult = a*i;
			printf("%d x %d = %d\n",a,i,mult);
		}
}
