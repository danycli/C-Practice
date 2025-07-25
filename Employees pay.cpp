#include<stdio.h>
int main(){
	//Employee payments
	char name[50];
	printf("Enter Your Name :");
	scanf("%s",&name);
	//printf("%s",name);
	printf("Enter your ID :");
	int id;
	scanf("%d",&id);
	//printf("%d",id);
	int hours;
	printf("Enter the hours you worked this Month :");
	scanf("%d",&hours);
	int o_t;
	printf("Enter the hours you do overtime this Month :");
	scanf("%d",& o_t);
	int monthly = hours * 312;
	printf("Your salary of this month is :Rs.%d\n",monthly);
	int overtime = o_t*312;
	printf("Your overtime pay of this month is :Rs.%d\n",overtime);
	int total = monthly + overtime;
	printf("Your total income of this month is :Rs.%d\n",total);
	return 0;
}
