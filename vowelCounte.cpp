#include <stdio.h>

int main() {
    char ch;
    int count = 0;

    printf("Enter a sentence: ");
    
    while(1){
    	scanf("%c",&ch);
    	if(ch=='\n'){
    		break;
		}
		if(ch=='a'|| ch=='e' || ch=='i' || ch=='o'|| ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
			printf("Vovel = %c\n",ch);
			count++;
		}
	}
	printf("The number of vowels in the sentence is %d",count);
}
