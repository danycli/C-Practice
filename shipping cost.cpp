#include<stdio.h>
int main(){
	int a;
	printf("Enter the wieght in kgs : ");
	scanf("%d",&a);
	int b,c,d;
	b=2000;
	c=5000;
	d=10500;
	
			if(a<=120){
				printf("Your are good to go");
			}else if(a>120 && a<=160){
				printf("Your saman is over weight\n");
				printf("You have to submit the fine of Rs:%d",b);
			}else if(a>160 && a<=200){
				printf("Your saman is too over weight\n");
				printf("You have to submit the fine of Rs:%d",c);
			}else if(a>200 && a<=250){
				printf("Your saman is too over weight\n");
				printf("You have to submit the fine of Rs:%d",c);
			}else {
				printf("Your saman is tooooo over weight\n");
				printf("You have to submit the fine of Rs:%d",d);
			}
}
