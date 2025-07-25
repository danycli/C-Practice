#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    printf("Basic calculator....\n\n");
    char exp[1000];
    int a = 0,b = 0,result;
    printf("Enter the expression....:");
    fgets(exp,sizeof(exp),stdin);
    // printf("\nWithout spaces...\n");
    for(int i=0; exp[i]!='\0'; i++){
        if(exp[i] != ' ' && exp[i] != '\n'){
             while (isdigit(exp[i])) {
                a = a * 10 + (exp[i] - '0');
                i++;
            }
            char op = exp[i];
            i++;
            
            while (isdigit(exp[i])) {
                b = b * 10 + (exp[i] - '0');
                i++;
            }
            switch(op){
                case '+':result = a + b;break;
                case '-':result = a - b;break;
                case '*':result = a * b;break;
                case '/':
                    if(b == 0){
                        printf("Error division by zero is not possible....");
                        return 1;
                    }else{
                        result = a / b;
                    }
                    break;
                default :printf("Invalid operator %c",op);
                return 0;
            }
        }
    }
    printf("\nResult : %d",result);
}
