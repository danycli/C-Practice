#include<stdio.h>
int main(){
	int n,first=0,second=1,next;
	printf("Enter a number :");
	scanf("%d",&n);
	
		while(first<=n){
			printf("%d\n",first);
			next=first+second;
			first=second;
			second=next;
		}
}
