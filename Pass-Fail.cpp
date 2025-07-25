#include<stdio.h>
int main(){
	printf("Final Result Calculator\n");
	float totalmarks;
	printf("Enter Total marks: ");
	scanf("%f",&totalmarks);
	float obtainmarks;
	printf("Enter Obtain marks: ");
	scanf("%f",&obtainmarks);
	float per = obtainmarks/totalmarks*100;
	if (obtainmarks > totalmarks){
		printf("Invalid!\n");
		printf("Obtain marks should not be greater then Total marks.");
	}
	else{
	if (per >= 60){
		printf("Your percentage is :%.2f",per);
		char de = '%';
		printf("%c\n",de);
		printf("Pass\n");
	}
	else if (per < 59){
		printf("Your percentage is :%.2f%",per);
		char de = '%';
		printf("%c\n",de);
		printf("Fail\n");
	}
	if(per>=90){
		printf("Grade = A+\n");
		printf("Oh, look at the A+ squad, flexing those perfect scores like it's a full-time job! Must be nice living in the land of highlighters and no social life. Enjoy the view from the top… while the rest of us actually have fun!");
	}
	else if(per>=80){
		printf("Grade = A\n");
		printf("Ah, the A-grade crew, riding high on that almost perfection! Close, but no cigar-still chasing those elusive pluses, huh? Keep polishing those silver medals; maybe one day you'll join the A+ elites… or not");

		}
	else if(per>=70){
		printf("Grade = B\n");
		printf("Hey there, B-team champions! Not quite the stars, but hey, at least you're not the C's, right? Living that 'good enough' life while secretly wondering what a library looks like. Keep coasting-mediocrity has its perks");
	}
	else if(per>= 60){
		printf("Grade = C\n");
		printf("Congratulations, margin warriors! You’ve mastered the art of barely scraping by. Remember, C’s get degrees… but A’s get applause. Better luck next time, or maybe just try studying for once?");
	}
	else if(per<=59){
		printf("Grade = F\n");
		printf("Oh, the F squad-true rebels of the academic world! Who needs grades when you've got style and a complete disregard for textbooks? Keep living that 'F' life-it stands for Fabulously Failing");
	}
	}
}
