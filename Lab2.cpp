#include<stdio.h>
int main(){
	int a[5],count;
	printf("Enter 5 numbers :");
	for (int i = 0; i < 5; i++){
		scanf("%d",&a[i]);
		count++;
	}
	int even=0,odd=0;
	
		for(int i=0; i<=4; i++){
			if(a[i]%2==0){
				even++;
			}else{
				odd++;
			}
		}
		printf("Count of even numbers is : %d",even);
		printf("\nCount of odd numbers is : %d",odd);

}
