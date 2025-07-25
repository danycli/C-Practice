#include<stdio.h>
int main(){
	int a[10],sum=0;
	printf("Enter 10 numbers :");
	
		for(int i=0; i<=4; i++){
			scanf("%d",&a[i]);
		}
		for(int i=0; i<=4; i++){
			if(a[i]%2==0){
				continue;
			}else{
				sum+=a[i];
			}
		}
		if(sum>0){
			printf("The sum of the odd numbers is %d\n",sum);
		}else{
			printf("No odd number found in array");
		}
}
