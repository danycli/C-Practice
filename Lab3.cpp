#include<stdio.h>
int main(){
	int a[6]={12,32,54,2,76,87},max,min;
	max=min=a[0];
		for(int i=0; i<=5; i++){
			if(a[i]>max){
				max=a[i];
			}
			if(a[i]<min){
				min=a[i];
			}
		}
		printf("Maximum Value is %d\n",max);
		printf("Minimum Value is %d",min);
}
