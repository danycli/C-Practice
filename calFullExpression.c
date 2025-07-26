#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define CONSOLE_WIDTH 120

void printCenteredBox(char message[]) {
    int msgLen = strlen(message);
    int boxWidth = msgLen +8;
    if (boxWidth < 40) boxWidth = 40;
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║           %s", message);
    for (int i = 0; i < boxWidth - 6 - msgLen-7; i++) printf(" ");
    printf("║\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");
}

void printError(const char message[]) {
    int msgLen = strlen(message);
    int boxWidth = msgLen + 8;
    if (boxWidth < 50) boxWidth = 50;
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;

    printf("\033[1;35m");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║            \033[1;31m%s\033[0m\033[33m", message);
    printf("\033[1;35m");
    for (int i = 0; i < boxWidth - 6 - msgLen-10; i++) printf(" ");
    printf("  ║\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");

}

void printSuccess(const char message[]) {
    int msgLen = strlen(message);
    int boxWidth = msgLen + 8;
    if (boxWidth < 50) boxWidth = 50;
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;

    printf("\033[1;35m");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║              \033[1;36m%s\033[33m", message);
    printf("\033[1;35m");
    for (int i = 0; i < boxWidth - 6 - msgLen - 12; i++) printf(" ");
    printf("  ║\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");

}
void printCenteredBoxans(char message[],float num){
    float original = num;
    int nu = num;
    int n = 0; 
    while(nu!=0){
        nu /= 10;
        n++;
    } 
    int msgLen = strlen(message);
    int lengt = msgLen + n;
    int boxWidth = lengt +8;
    if (boxWidth < 40) boxWidth = 40;
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;

    printf("\033[1;35m");
    
    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");

    if(original >= 0){
        for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║             \033[1;32m%s%.2f\033[0m", message,original);
    printf("\033[1;35m");
    for (int i = 0; i < boxWidth - 20 - lengt ; i++) printf(" ");
    printf("  ║\n");
    }else{
        for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║             \033[1;32m%s%.2f\033[0m", message,original);
    printf("\033[1;35m");
    for (int i = 0; i < boxWidth - 20 - lengt-1 ; i++) printf(" ");
    printf("  ║\n");
    }

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");

}

void printCenteredBoxThanks(char message[]) {
    int msgLen = strlen(message);
    int boxWidth = msgLen +8;
    if (boxWidth < 40) boxWidth = 40;
    int sideSpaces = (CONSOLE_WIDTH - boxWidth) / 2;

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╔");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╗\n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("║    %s", message);
    for (int i = 0; i < boxWidth - 6 - msgLen; i++) printf(" ");
    printf("║  \n");

    for (int i = 0; i < sideSpaces; i++) printf(" ");
    printf("╚");
    for (int i = 0; i < boxWidth - 2; i++) printf("═");
    printf("╝\n");
}

int main(){
    char exp[1000];
    char expreal[1000];
    char choice;
    
    system("chcp 65001 > nul");
    system("color D");
    
    printf("\n");
    printCenteredBox("Basic Calculator");
    printf("\n\n");
    
    while(1) {
        int j=0;
        
        printf("\t\t\t\t\t ▶ Enter an Expression :");
        fgets(exp, sizeof(exp),stdin);

        for(int i=0; exp[i]!='\0'; i++){
            if(exp[i] != ' '){
                expreal[j] = exp[i];
                j++;
            }
        }
        expreal[j] = '\0';
        
        float num[1000] = {0};
        int readingNumber = 0, z = 0, val = 0;

        for(int i = 0; expreal[i] != '\0'; i++){
            if (isdigit(expreal[i])) {
            val = val * 10 + (expreal[i] - '0');
            readingNumber = 1;
        }else{
            if (readingNumber) {
            num[z++] = val;
            val = 0;
            readingNumber = 0;
        }
    }
}
    if (readingNumber) {
    num[z++] = val;
}
        char op[1000] = {0}; 
        int b = 0;
            for(int i = 0; expreal[i] != '\0'; i++){
                if(expreal[i] == '+' || expreal[i] == '-' || expreal[i] == '*' || expreal[i] == '/'){
                op[b++] = expreal[i];
            }
        }
        
        int divisionByZero = 0;
        
for (int i = 0; i < b; i++) {
    if (op[i] == '*') {
        num[i] = num[i] * num[i + 1];
    } else if (op[i] == '/') {
        if (num[i + 1] == 0) {
            printError("Error: Division by zero!");
            printf("\n");
            divisionByZero = 1;
            break;
        }
        num[i] = num[i] / num[i + 1];
    } else {
        continue;
    }
    for (int j = i + 1; j < z - 1; j++) num[j] = num[j + 1];
    for (int j = i; j < b - 1; j++) op[j] = op[j + 1];
    z--;
    b--;
    i--;
}

if(divisionByZero) {
    continue;
}

for (int i = 0; i < b; i++) {
    if (op[i] == '+') {
        num[i] = num[i] + num[i + 1];
    } else if (op[i] == '-') {
        num[i] = num[i] - num[i + 1];
    }

    for (int j = i + 1; j < z - 1; j++) num[j] = num[j + 1];
    for (int j = i; j < b - 1; j++) op[j] = op[j + 1];
    z--;
    b--;
    i--;
}
    float n = num[0];
    printCenteredBoxans("ANSWER = ",n);
    printf("\n");
    printSuccess("CALCULATION COMPLETE");
    printf("\n");
    
    printf("\t\t\t\t ▶ Do you want to calculate another expression? (y/n): ");
    scanf(" %c", &choice);
    getchar();
    
    if(choice == 'n' || choice == 'N') {
        printf("\n");
        printCenteredBoxThanks("Thank you for using the calculator!");
        printf("\n");
        break;
    }
    printf("\n");
    }
    return 0;
}