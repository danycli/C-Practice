#include<stdio.h>
int main(){
	printf("Different Cars Rattings\n");
	int car;
	printf("Enter a number 1-10: ");
	scanf("%d/n",&car);
	switch (car){
		case 1 : printf("BMW\n");
			break;
		case 2 : printf("Porsche\n");
			break;
		case 3 : printf("Lambogini\n");
			break;
		case 4 : printf("Mercedes\n");
			break;
		case 5 : printf("Toyota\n");
			break;
		case 6 : printf("Honda\n");
			break;
		case 7 : printf("Wolkswagen\n");
			break;
		case 8 : printf("Bugatti\n");
			break;
		case 9 : printf("Land Rover/n");
			break;
		case 10 : printf("Lexus\n");
			break;
		default : printf("Not a valid number!");
		return 0;
	}
}
