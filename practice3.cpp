#include<stdio.h>
int main(){
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	
	  int sum=0;
		for(int j=1; j<=n; j++){
			if(j%2!=0){
				continue;
		}
		sum +=j;
		}
		printf("%d\n",sum);
}
