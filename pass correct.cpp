#include <stdio.h>
int main() {
    int correctPassword = 1033971; 
    int userInput;
    int count = 3, reg;
    int ran;

    while (1) {
        printf("Enter the password (numbers only): ");
        scanf("%d", &userInput);

        if (userInput == correctPassword) {
            printf("Correct password! Access granted.\n");
            break;
        } else {
            printf("Incorrect password. Try again.\n");
        }
        ran ++;
        if(ran <3){
        	printf("Account Blocked");
		}
    }
    return 0;
}
