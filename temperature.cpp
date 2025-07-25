#include<stdio.h>
int main(){
    printf("Temperature converter\n");
    printf("Choose your preferred conversion\n");
    printf("1.Celsius to Fahrenheit\n2.Celsius to Kelvin\n3.Fahrenheit to Celsius\n4.Fahrenheit to kelvin\n5.Kelvin to Celsius\n6.Kelvin to Fahrenheit\n");
    printf("Enter the number :");
    int num;
    scanf("%d",&num);
    if (num == 1)
    {
        printf("Enter the value :");
        float temp1;
        scanf("%f",&temp1);
        float _1 = (temp1*9/5)+32;
        printf("%f",_1) ;
    }
    else if (num == 2)
    {
        printf("Enter the value :");
        float temp2;
        scanf("%f",&temp2);
        float _2 = (temp2+273.15);
        printf("%f",_2);
    }
    if (num == 3)
    {
        printf("Enter the value :");
        float temp3;
        scanf("%f",&temp3);
        float _3 = (temp3-32)*5/9;
        printf("%f",_3);
    }
    else if (num == 4)
    {
        printf("Enter the value :");
        float temp4;
        scanf("%f",&temp4);
        float _4 = (temp4-32)*5/9+273.15;
        printf("%f",_4);
    }
    if (num == 5)
    {
        printf("Enter the value :");
        float temp5;
        scanf("%f",&temp5);
        float _5 = (temp5 - 273.15);
        printf("%f",_5);
    }
    else if (num == 6)
    {
        printf("Enter the value :");
        float temp6;
        scanf("%f",&temp6);
        float _6 = (temp6-273.15)+32*5/9;
        printf("%f",_6);
    }
    else 
    	printf("Invalid Number");
    return 0;

}

