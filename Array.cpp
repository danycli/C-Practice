#include<stdio.h>
int main(){
	int a[5]={2,23,4,2,1};
	int max,secondmax;
	max=a[0];
	
		for(int i=0; i<=4; i++){
			if(a[i]>max){
				max=a[i];
			}
		}
		
		
		secondmax=a[0];
		for(int i=0; i<=4; i++){
			if(max==a[i]){
				continue;
			}
			if(a[i]>secondmax){
				secondmax=a[i];
			}
		}
		printf("Largest Number is : %d",max);
		printf("Second Largest Number is : %d",secondmax);
}
