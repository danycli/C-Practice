#include<stdio.h>
int main(){
	int a, b;
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	
		if(a<b){
			printf("%d is them smallest among them.",a);
		}else{
			printf("%d is smallest among them.",b);
		}
}
