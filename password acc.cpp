#include<stdio.h>
int main(){
	int ac;
	printf("Enter your account number :");
	scanf("%d",&ac);
	int ac1,ac2,ac3,ac4,ac5;
	ac1=200;
	ac2=394;
	ac3=4835;
	ac4=873;
	ac5=9283;
	
		if(ac<=5){
			printf("Enter Your password :");
		}
	
	
		if(ac==1){
			int b=12345;
			int b1;
			scanf("%d",&b1);
			
				if(b1==b){
					printf("--Access Granted--\n");
					printf("Your acc balance is : %d",ac1);
				} else{
					printf("Incorrect Pass\n");
					printf("--Access Denied--\n");
				}	
    }if(ac==2){
			int a=123456;
			int a1;
			scanf("%d",&a1);
			
				if(a1==a){
					printf("--Access Granted--\n");
					printf("Your acc balance is : %d",ac2);
				} else{
					printf("Incorrect Pass\n");
					printf("--Access Denied--\n");
				}
    }if(ac==3){
			int c=1234567;
			int c1;
			scanf("%d",&c1);
			
				if(c1==c){
					printf("--Access Granted--\n");
					printf("Your acc balance is : %d",ac3);
				} else{
					printf("Incorrect Pass\n");
					printf("--Access Denied--\n");
				}
    }if(ac==4){
			int d=12345678;
			int d1;
			scanf("%d",&d1);
			
				if(d1==d){
					printf("--Access Granted--\n");
					printf("Your acc balance is : %d",ac4);
				} else{
					printf("Incorrect Pass\n");
					printf("--Access Denied--\n");
				}
    }if(ac==5){
			int e=123456789;
			int e1;
			scanf("%d",&e1);
			
				if(e1==e){
					printf("--Access Granted--\n");
					printf("Your acc balance is : %d",ac5);
				} else{
					printf("Incorrect Pass\n");
					printf("--Access Denied--\n");
				}
    }else if(ac>5){
		printf("Invalid Account number.");
	}
}
