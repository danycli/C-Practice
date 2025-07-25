#include<stdio.h>
#include<unistd.h>
#include<conio.h>
int main(){
	char ch;
	int j=0;
	printf("Press 'S or s' to start & 'E or e' the StopWatch :");
	
		while(1){
			scanf(" %c",&ch);
			printf("\n");
		if(ch=='S' || ch=='s'){
			printf("\n");
			while(1){
				printf("\rTime : %d seconds ",j);
				fflush(stdout);
				sleep(1);
				j++;
				
				if(kbhit()){
					ch = getch();
					
					if(ch=='e' || ch=='E'){
						printf("\n \nStop Watch breaked.....");
						j=0;
						return 0;
				}
			}
			}
			}
			else{
				printf("\nInvalid Character!\n");
				printf("Try Again :");
		}
	}
}
