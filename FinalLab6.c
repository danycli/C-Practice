#include<stdio.h>
#include<string.h>

struct Account {
    int accNo;
    char name[100];
    float balance;
};

int main() {
    struct Account acc[3];
    for(int i = 0; i < 3; i++) {
        printf("Enter account number: ");
        scanf("%d", &acc[i].accNo);
        getchar();
        printf("Enter holder name: ");
        fgets(acc[i].name, sizeof(acc[i].name), stdin);
        acc[i].name[strcspn(acc[i].name, "\n")] = 0;
        printf("Enter balance: ");
        scanf("%f", &acc[i].balance);
    }
    for(int i = 0; i < 3; i++) {
        if(acc[i].balance > 10000) {
            printf("Account No: %d\nName: %s\nBalance: %.2f\n", acc[i].accNo, acc[i].name, acc[i].balance);
        }
    }
    return 0;
}