#include<stdio.h>
int main(){
	int a[5];
	printf("Enter 5 numbers :");
	
		for(int i=0; i<=4; i++){
			scanf("%d",&a[i]);
		}
		for(int i=0; i<=4; i++){
			if(a[i]==4){
				printf("The number 4 is found at the index %d",i+1);
			}
		}
}
