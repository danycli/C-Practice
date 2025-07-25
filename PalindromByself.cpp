#include<stdio.h>
int main(){
	int a,originalnum,rev=0,num;
	printf("Enter a number :");
	scanf("%d",&a);
	
	originalnum = a;
		while(a!=0){
			num=a%10;
			rev=rev*10+num;
			a/=10;
		}
		
	if(rev == originalnum){
		printf("%d is a palindrom",originalnum);
	}else{
		printf("%d is not a palindrom",originalnum);
	}
}
