#include<stdio.h>
int main(){
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	
	int count=0;
	int count2=0;
	
		for(int j=1; j<=a; j++){
			if(j%2==0){
				count++;
			}
		}
	printf("Total Even numbers upto %d are : %d\n",a,count);
	
	for(int j=1; j<=a; j++){
			if(j%2!=0){
				count2++;
			}
		}
	printf("Total Odd numbers upto %d are : %d\n",a,count2);
	
}
