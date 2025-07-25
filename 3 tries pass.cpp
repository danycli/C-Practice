#include<stdio.h>
int main(){
	int a=1033971,b,tries;
	printf("Enter Password :");
	scanf("%d",&b);
	tries =1;
	
		while(a!=b && tries<3){
			printf("Access Denied!\n");
			printf("Enter Password again :");
			scanf("%d",&b);
			tries++;
		}
		if(tries<=3 && a==b){
			printf("Access Granted\n");
		}else{
			printf("Account Blocked");
		}
}
