#include<stdio.h>
int main(){
	int a[7]={23,33,56,79,12,78,99};
	
		for(int i=0; i<=6; i++){
			if(a[i]%3==0){
				printf("%d ",a[i]);
			}else{
				continue;
			}
		}
}
