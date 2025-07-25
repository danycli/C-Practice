#include<stdio.h>
int main(){
    int number;
    int digitCount=0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if(number < 0){
        printf("Enter a non-negative number.\n");
        return 1; // Exit program with error code
    }
    
    if (number == 0){
        digitCount = 1;
    } else {
        while (number > 0){
            digitCount++;
            number = number/10;
        }
    }
    
    printf("The digit count is %d", digitCount);
    
    return 0;
}
