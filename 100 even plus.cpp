#include <stdio.h>
int main() {
    int num = 1;
    int sum = 0;

    	while (num<=100) {
       		 if (num%2 == 0) {
            sum =sum+num;
        }
        num++;
    }
    printf("Sum of even numbers from 1 to 100: %d\n", sum);
    return 0;
}
