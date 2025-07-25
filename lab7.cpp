#include<stdio.h>
int main(){
	int a[5],countnegative=0,countpositive=0,countzero=0;
	printf("Enter 5 numbers :");
	
		for(int i=0; i<=4; i++){
			scanf("%d",&a[i]);
		}
		for(int i=0; i<=4; i++){
			if(a[i]<0){
				countnegative++;
			}
			if(a[i]>0){
				countpositive++;
			}
			if(a[i]==0){
				countzero++;
			}
		}
		printf("Count of positive numbers =%d\n",countpositive);
		printf("Count of negative numbers =%d\n",countnegative);
		printf("Count of zeros =%d\n",countzero);
}
