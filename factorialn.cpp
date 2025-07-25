#include <stdio.h>

int main() {
    int num, i = 1;
    int factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    	if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
   		} else {
        	while (i <= num) {
            	factorial *= i;
            	i++;
        }
        	printf("Factorial of %d = %d\n", num, factorial);
    }
    return 0;
}
