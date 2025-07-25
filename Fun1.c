#include<stdio.h>

void temp(int a){
    float one = (a * 9.0 / 5.0) + 32;
    printf("%d Celsius in Farenheit is %f",a,one);
}
void temp1(int a){
    float one = (a - 32) * 5.0 / 9.0;
    printf("%d Farenheit in Celsius is %f",a,one);
}
int main(){
    int te,raw;
    printf("Enter one of your choice :\n1.CelSius to Fahrenheit\n2.Fahrenheit to Celsius\nChoose :");
    while(1){
        scanf("%d",&te);
        if(te <1 || te >2){
            printf("Invalid Operation!\nTry again :");
        }else{
            break;
        }
    }
    
    if(te == 1){
        printf("Enter the temperature");
        scanf("%d",&raw);
        temp(raw);
    }else{
        printf("Enter the temperature");
        scanf("%d",&raw);
        temp1(raw);
    }
}