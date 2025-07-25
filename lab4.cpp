#include<stdio.h>
int main(){
	int a[8]={23,45,3,45,7,4,6,90},sum=0,avg;
	
		for(int i=0; i<=7; i++){
			sum+=a[i];
		}
		printf("Average of the numbers is %d",sum/8);
}
