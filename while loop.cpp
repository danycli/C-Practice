#include<stdio.h>
int main(){
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	for (int j=1; j<=n; j++){
		if(j%2==0){
			continue;
		}
	printf("%d\n",j);
	}
}
