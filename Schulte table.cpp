#include<stdio.h>
#include<stdlib.h>//1
#include<conio.h>//2
#include<unistd.h>//3
#include<time.h>
int main(){
	int secret=1,num,time1=0;
	int move=0;
	int s;
	printf("Select one of the Following\n");
	printf("1.Nnumbers in Sequence\n2.Random Numbers\n");
	printf("Choose :");
	scanf("%d",&s);
	
		while(s>2 || s<=0){
			printf("Invalid Option!\n");
			printf("Try again :");
			scanf("%d",&s);
		}
	
	if(s==1){

			
		while(secret<=25){
			printf("\rTimer : %d seconds | Enter %d :",time1,secret);
				fflush(stdout);//3
				
				sleep(1);//3
				time1++;
			if(kbhit()){//2
				scanf("%d",&num);
			if(num==secret){
				secret++;
			}
			}
			system("cls");//1
		}
	}else{
		if(s==2){
			srand(time(NULL));
			while(move<25){
				int r=rand()%100;
				for(int j=1;;j++){
				printf("\rTimer : %d seconds | Enter %d :",time1,r);
				fflush(stdout);//3
				
				sleep(1);//3
				time1++;
			if(kbhit()){//2
				scanf("%d",&num);
			if(num==r){
				move++;
				break;
			}
			}
		}
			system("cls");//1
		}
	}
}
		printf("You got it in %d seconds",time1);
}
