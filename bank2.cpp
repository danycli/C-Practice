#include <stdio.h>

				//A project by Danial Ahmed(136), Saad Khan(131) & Mudassir Khan(138)

int main() {
    printf("-----WELCOME TO BYTE BANKING SYSTEM------\n");

    int ac[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    
    long long int pass1 = 123, pass2 = 1234, pass3 = 12345, pass4 = 123456;
    long long int pass5 = 1234567, pass6 = 12345678, pass7 = 123456789;
    long long int pass8 = 1234567890, pass9 = 12345678910, pass10 = 1234567891011;
    
    
    int accnum;
    printf("Please enter your account number (1-10): ");
    scanf("%d", &accnum);
    
    while(accnum > 10 || accnum < 1) {
        printf("\n	INVALID ACCOUNT NUMBER!  \n");
        printf("Please enter a valid account number (1-10): ");
        scanf("%d", &accnum);
    }

    if(accnum == 1) {
        long long int p1;
        printf("\n========================================\n");
        printf("Account Number: 1\n");
        printf("Please enter your password: ");
        scanf("%lld", &p1);
        
        int attempts = 1;
        while(p1 != pass1) {
            attempts++;
            if(attempts > 3) {
                printf("\n   ACCOUNT BLOCKED DUE TO MULTIPLE INCORRECT PASSWORD ATTEMPTS!   \n");
                printf("========================================\n");
                return 0;
            }
            printf("\n	ACCESS DENIED - INCORRECT PASSWORD!  \n");
            printf("Please try again: ");
            scanf("%lld", &p1);
        }
        
        printf("\n========================================\n");
        printf("ACCESS GRANTED\n");
        printf("Account Holder: Muhammad Younas\n");
        printf("Current Balance: $%d\n\n", ac[0]);
        
        printf("Please select an operation:\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("Your choice: ");
        
        int num;
        scanf("%d", &num);
        while(num > 2 || num < 1) {
            printf("\n   INVALID OPERATION!  \n");
            printf("Please choose 1 or 2: ");
            scanf("%d", &num);
        }

        if(num == 1) {
            printf("\nEnter the amount to withdraw: $");
            int cash;
            scanf("%d", &cash);
            while(cash > ac[0]) {
                printf("\n   INSUFFICIENT BALANCE!   \n");
                printf("Your current balance is $%d\n", ac[0]);
                printf("Please enter a smaller amount: $");
                scanf("%d", &cash);
            }
            
            ac[0] -= cash;
            printf("\n========================================\n");
            printf("WITHDRAWAL SUCCESSFUL\n");
            printf("Amount Withdrawn: $%d\n", cash);
            printf("Remaining Balance: $%d\n", ac[0]);
            printf("========================================\n");
        } 
        else if(num == 2) {
            printf("\nEnter the amount to deposit: $");
            int cash1;
            scanf("%d", &cash1);
            ac[0] += cash1;
            
            printf("\n========================================\n");
            printf("DEPOSIT SUCCESSFUL\n");
            printf("Amount Deposited: $%d\n", cash1);
            printf("New Balance: $%d\n", ac[0]);
            printf("========================================\n");
        }
    }

    else if(accnum == 2) {
        long long int p2;
        printf("\n========================================\n");
        printf("Account Number: 2\n");
        printf("Please enter your password: ");
        scanf("%lld", &p2);
        
        int attempts = 1;
        while(p2 != pass2) {
            attempts++;
            if(attempts > 3) {
                printf("\n   ACCOUNT BLOCKED DUE TO MULTIPLE INCORRECT PASSWORD ATTEMPTS!   \n");
                printf("========================================\n");
                return 0;
            }
            printf("\n   ACCESS DENIED - INCORRECT PASSWORD!  \n");
            printf("Please try again: ");
            scanf("%lld", &p2);
        }
        
        printf("\n========================================\n");
        printf("ACCESS GRANTED\n");
        printf("Account Holder: Abdul Wahab\n");
        printf("Current Balance: $%d\n\n", ac[1]);
        
        printf("Please select an operation:\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("Your choice: ");
        
        int num2;
        scanf("%d", &num2);
        while(num2 > 2 || num2 < 1) {
            printf("\n	INVALID OPERATION!   \n");
            printf("Please choose 1 or 2: ");
            scanf("%d", &num2);
        }

        if(num2 == 1) {
            printf("\nEnter the amount to withdraw: $");
            int cash2;
            scanf("%d", &cash2);
            while(cash2 > ac[1]) {
                printf("\n   INSUFFICIENT BALANCE!   \n");
                printf("Your current balance is $%d\n", ac[1]);
                printf("Please enter a smaller amount: $");
                scanf("%d", &cash2);
            }
            
            ac[1] -= cash2;
            printf("\n========================================\n");
            printf("WITHDRAWAL SUCCESSFUL\n");
            printf("Amount Withdrawn: $%d\n", cash2);
            printf("Remaining Balance: $%d\n", ac[1]);
            printf("========================================\n");
        } 
        else if(num2 == 2) {
            printf("\nEnter the amount to deposit: $");
            int cash02;
            scanf("%d", &cash02);
            ac[1] += cash02;
            
            printf("\n========================================\n");
            printf("DEPOSIT SUCCESSFUL\n");
            printf("Amount Deposited: $%d\n", cash02);
            printf("New Balance: $%d\n", ac[1]);
            printf("========================================\n");
        }
    }

    else if(accnum == 3) {
        long long int p3;
        printf("\n========================================\n");
        printf("Account Number: 3\n");
        printf("Please enter your password: ");
        scanf("%lld", &p3);
        
        int attempts = 1;
        while(p3 != pass3) {
            attempts++;
            if(attempts > 3) {
                printf("\n   ACCOUNT BLOCKED DUE TO MULTIPLE INCORRECT PASSWORD ATTEMPTS!   \n");
                printf("========================================\n");
                return 0;
            }
            printf("\n   ACCESS DENIED - INCORRECT PASSWORD!   \n");
            printf("Please try again: ");
            scanf("%lld", &p3);
        }
        
        printf("\n========================================\n");
        printf("ACCESS GRANTED\n");
        printf("Account Holder: Talha Wali\n");
        printf("Current Balance: $%d\n\n", ac[2]);
        
        printf("Please select an operation:\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("Your choice: ");
        
        int num3;
        scanf("%d", &num3);
        while(num3 > 2 || num3 < 1) {
            printf("\n	INVALID OPERATION!   \n");
            printf("Please choose 1 or 2: ");
            scanf("%d", &num3);
        }

        if(num3 == 1) {
            printf("\nEnter the amount to withdraw: $");
            int cash3;
            scanf("%d", &cash3);
            while(cash3 > ac[2]) {
                printf("\n   INSUFFICIENT BALANCE!   \n");
                printf("Your current balance is $%d\n", ac[2]);
                printf("Please enter a smaller amount: $");
                scanf("%d", &cash3);
            }
            
            ac[2] -= cash3;
            printf("\n========================================\n");
            printf("WITHDRAWAL SUCCESSFUL\n");
            printf("Amount Withdrawn: $%d\n", cash3);
            printf("Remaining Balance: $%d\n", ac[2]);
            printf("========================================\n");
        } 
        else if(num3 == 2) {
            printf("\nEnter the amount to deposit: $");
            int cash03;
            scanf("%d", &cash03);
            ac[2] += cash03;
            
            printf("\n========================================\n");
            printf("DEPOSIT SUCCESSFUL\n");
            printf("Amount Deposited: $%d\n", cash03);
            printf("New Balance: $%d\n", ac[2]);
            printf("========================================\n");
        }
    }

    else if(accnum == 4) {
        long long int p4;
        printf("\n========================================\n");
        printf("Account Number: 4\n");
        printf("Please enter your password: ");
        scanf("%lld", &p4);
        
        int attempts = 1;
        while(p4 != pass4) {
            attempts++;
            if(attempts > 3) {
                printf("\n   ACCOUNT BLOCKED DUE TO MULTIPLE INCORRECT PASSWORD ATTEMPTS!   \n");
                printf("========================================\n");
                return 0;
            }
            printf("\n   ACCESS DENIED - INCORRECT PASSWORD!   \n");
            printf("Please try again: ");
            scanf("%lld", &p4);
        }
        
        printf("\n========================================\n");
        printf("ACCESS GRANTED\n");
        printf("Account Holder: Muzammil Ahmed\n");
        printf("Current Balance: $%d\n\n", ac[3]);
        
        printf("Please select an operation:\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("Your choice: ");
        
        int num4;
        scanf("%d", &num4);
        while(num4 > 2 || num4 < 1) {
            printf("\n   INVALID OPERATION!   \n");
            printf("Please choose 1 or 2: ");
            scanf("%d", &num4);
        }

        if(num4 == 1) {
            printf("\nEnter the amount to withdraw: $");
            int cash4;
            scanf("%d", &cash4);
            while(cash4 > ac[3]) {
                printf("\n   INSUFFICIENT BALANCE!   \n");
                printf("Your current balance is $%d\n", ac[3]);
                printf("Please enter a smaller amount: $");
                scanf("%d", &cash4);
            }
            
            ac[3] -= cash4;
            printf("\n========================================\n");
            printf("WITHDRAWAL SUCCESSFUL\n");
            printf("Amount Withdrawn: $%d\n", cash4);
            printf("Remaining Balance: $%d\n", ac[3]);
            printf("========================================\n");
        } 
        else if(num4 == 2) {
            printf("\nEnter the amount to deposit: $");
            int cash04;
            scanf("%d", &cash04);
            ac[3] += cash04;
            
            printf("\n========================================\n");
            printf("DEPOSIT SUCCESSFUL\n");
            printf("Amount Deposited: $%d\n", cash04);
            printf("New Balance: $%d\n", ac[3]);
            printf("========================================\n");
        }
    }

    else if(accnum == 5) {
        long long int p5;
        printf("\n========================================\n");
        printf("Account Number: 5\n");
        printf("Please enter your password: ");
        scanf("%lld", &p5);
        
        int attempts = 1;
        while(p5 != pass5) {
            attempts++;
            if(attempts > 3) {
                printf("\n   ACCOUNT BLOCKED DUE TO MULTIPLE INCORRECT PASSWORD ATTEMPTS!   \n");
                printf("========================================\n");
                return 0;
            }
            printf("\n   ACCESS DENIED - INCORRECT PASSWORD!   \n");
            printf("Please try again: ");
            scanf("%lld", &p5);
        }
        
        printf("\n========================================\n");
        printf("ACCESS GRANTED\n");
        printf("Account Holder: Sufiyan Akhtar\n");
        printf("Current Balance: $%d\n\n", ac[4]);
        
        printf("Please select an operation:\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("Your choice: ");
        
        int num5;
        scanf("%d", &num5);
        while(num5 > 2 || num5 < 1) {
            printf("\n   INVALID OPERATION!   \n");
            printf("Please choose 1 or 2: ");
            scanf("%d", &num5);
        }

        if(num5 == 1) {
            printf("\nEnter the amount to withdraw: $");
            int cash5;
            scanf("%d", &cash5);
            while(cash5 > ac[4]) {
                printf("\n   INSUFFICIENT BALANCE!   \n");
                printf("Your current balance is $%d\n", ac[4]);
                printf("Please enter a smaller amount: $");
                scanf("%d", &cash5);
            }
            
            ac[4] -= cash5;
            printf("\n========================================\n");
            printf("WITHDRAWAL SUCCESSFUL\n");
            printf("Amount Withdrawn: $%d\n", cash5);
            printf("Remaining Balance: $%d\n", ac[4]);
            printf("========================================\n");
        } 
        else if(num5 == 2) {
            printf("\nEnter the amount to deposit: $");
            int cash05;
            scanf("%d", &cash05);
            ac[4] += cash05;
            
            printf("\n========================================\n");
            printf("DEPOSIT SUCCESSFUL\n");
            printf("Amount Deposited: $%d\n", cash05);
            printf("New Balance: $%d\n", ac[4]);
            printf("========================================\n");
        }
    }

    else if(accnum == 6) {
        long long int p6;
        printf("\n========================================\n");
        printf("Account Number: 6\n");
        printf("Please enter your password: ");
        scanf("%lld", &p6);
        
        int attempts = 1;
        while(p6 != pass6) {
            attempts++;
            if(attempts > 3) {
                printf("\n   ACCOUNT BLOCKED DUE TO MULTIPLE INCORRECT PASSWORD ATTEMPTS!   \n");
                printf("========================================\n");
                return 0;
            }
            printf("\n   ACCESS DENIED - INCORRECT PASSWORD!   \n");
            printf("Please try again: ");
            scanf("%lld", &p6);
        }
        
        printf("\n========================================\n");
        printf("ACCESS GRANTED\n");
        printf("Account Holder: Hammad Ali\n");
        printf("Current Balance: $%d\n\n", ac[5]);
        
        printf("Please select an operation:\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("Your choice: ");
        
        int num6;
        scanf("%d", &num6);
        while(num6 > 2 || num6 < 1) {
            printf("\n   INVALID OPERATION!  \n");
            printf("Please choose 1 or 2: ");
            scanf("%d", &num6);
        }

        if(num6 == 1) {
            printf("\nEnter the amount to withdraw: $");
            int cash6;
            scanf("%d", &cash6);
            while(cash6 > ac[5]) {
                printf("\n   INSUFFICIENT BALANCE!   \n");
                printf("Your current balance is $%d\n", ac[5]);
                printf("Please enter a smaller amount: $");
                scanf("%d", &cash6);
            }
            
            ac[5] -= cash6;
            printf("\n========================================\n");
            printf("WITHDRAWAL SUCCESSFUL\n");
            printf("Amount Withdrawn: $%d\n", cash6);
            printf("Remaining Balance: $%d\n", ac[5]);
            printf("========================================\n");
        } 
        else if(num6 == 2) {
            printf("\nEnter the amount to deposit: $");
            int cash06;
            scanf("%d", &cash06);
            ac[5] += cash06;
            
            printf("\n========================================\n");
            printf("DEPOSIT SUCCESSFUL\n");
            printf("Amount Deposited: $%d\n", cash06);
            printf("New Balance: $%d\n", ac[5]);
            printf("========================================\n");
        }
    }

    else if(accnum == 7) {
        long long int p7;
        printf("\n========================================\n");
        printf("Account Number: 7\n");
        printf("Please enter your password: ");
        scanf("%lld", &p7);
        
        int attempts = 1;
        while(p7 != pass7) {
            attempts++;
            if(attempts > 3) {
                printf("\n   ACCOUNT BLOCKED DUE TO MULTIPLE INCORRECT PASSWORD ATTEMPTS!   \n");
                printf("========================================\n");
                return 0;
            }
            printf("\n   ACCESS DENIED - INCORRECT PASSWORD!   \n");
            printf("Please try again: ");
            scanf("%lld", &p7);
        }
        
        printf("\n========================================\n");
        printf("ACCESS GRANTED\n");
        printf("Account Holder: Muhammad Faisal\n");
        printf("Current Balance: $%d\n\n", ac[6]);
        
        printf("Please select an operation:\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("Your choice: ");
        
        int num7;
        scanf("%d", &num7);
        while(num7 > 2 || num7 < 1) {
            printf("\n   INVALID OPERATION!  \n");
            printf("Please choose 1 or 2: ");
            scanf("%d", &num7);
        }

        if(num7 == 1) {
            printf("\nEnter the amount to withdraw: $");
            int cash7;
            scanf("%d", &cash7);
            while(cash7 > ac[6]) {
                printf("\n   INSUFFICIENT BALANCE!   \n");
                printf("Your current balance is $%d\n", ac[6]);
                printf("Please enter a smaller amount: $");
                scanf("%d", &cash7);
            }
            
            ac[6] -= cash7;
            printf("\n========================================\n");
            printf("WITHDRAWAL SUCCESSFUL\n");
            printf("Amount Withdrawn: $%d\n", cash7);
            printf("Remaining Balance: $%d\n", ac[6]);
            printf("========================================\n");
        } 
        else if(num7 == 2) {
            printf("\nEnter the amount to deposit: $");
            int cash07;
            scanf("%d", &cash07);
            ac[6] += cash07;
            
            printf("\n========================================\n");
            printf("DEPOSIT SUCCESSFUL\n");
            printf("Amount Deposited: $%d\n", cash07);
            printf("New Balance: $%d\n", ac[6]);
            printf("========================================\n");
        }
    }

    else if(accnum == 8) {
        long long int p8;
        printf("\n========================================\n");
        printf("Account Number: 8\n");
        printf("Please enter your password: ");
        scanf("%lld", &p8);
        
        int attempts = 1;
        while(p8 != pass8) {
            attempts++;
            if(attempts > 3) {
                printf("\n   ACCOUNT BLOCKED DUE TO MULTIPLE INCORRECT PASSWORD ATTEMPTS!   \n");
                printf("========================================\n");
                return 0;
            }
            printf("\n   ACCESS DENIED - INCORRECT PASSWORD!   \n");
            printf("Please try again: ");
            scanf("%lld", &p8);
        }
        
        printf("\n========================================\n");
        printf("ACCESS GRANTED\n");
        printf("Account Holder: Danial Ahmed\n");
        printf("Current Balance: $%d\n\n", ac[7]);
        
        printf("Please select an operation:\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("Your choice: ");
        
        int num8;
        scanf("%d", &num8);
        while(num8 > 2 || num8 < 1) {
            printf("\n!!! INVALID OPERATION !!!\n");
            printf("Please choose 1 or 2: ");
            scanf("%d", &num8);
        }

        if(num8 == 1) {
            printf("\nEnter the amount to withdraw: $");
            int cash8;
            scanf("%d", &cash8);
            while(cash8 > ac[7]) {
                printf("\n   INSUFFICIENT BALANCE! \n");
                printf("Your current balance is $%d\n", ac[7]);
                printf("Please enter a smaller amount: $");
                scanf("%d", &cash8);
            }
            
            ac[7] -= cash8;
            printf("\n========================================\n");
            printf("WITHDRAWAL SUCCESSFUL\n");
            printf("Amount Withdrawn: $%d\n", cash8);
            printf("Remaining Balance: $%d\n", ac[7]);
            printf("========================================\n");
        } 
        else if(num8 == 2) {
            printf("\nEnter the amount to deposit: $");
            int cash08;
            scanf("%d", &cash08);
            ac[7] += cash08;
            
            printf("\n========================================\n");
            printf("DEPOSIT SUCCESSFUL\n");
            printf("Amount Deposited: $%d\n", cash08);
            printf("New Balance: $%d\n", ac[7]);
            printf("========================================\n");
        }
    }

    else if(accnum == 9) {
        long long int p9;
        printf("\n========================================\n");
        printf("Account Number: 9\n");
        printf("Please enter your password: ");
        scanf("%lld", &p9);
        
        int attempts = 1;
        while(p9 != pass9) {
            attempts++;
            if(attempts > 3) {
                printf("\n   ACCOUNT BLOCKED DUE TO MULTIPLE INCORRECT PASSWORD ATTEMPTS!   \n");
                printf("========================================\n");
                return 0;
            }
            printf("\n   ACCESS DENIED - INCORRECT PASSWORD!   \n");
            printf("Please try again: ");
            scanf("%lld", &p9);
        }
        
        printf("\n========================================\n");
        printf("ACCESS GRANTED\n");
        printf("Account Holder: Aqib Shah\n");
        printf("Current Balance: $%d\n\n", ac[8]);
        
        printf("Please select an operation:\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("Your choice: ");
        
        int num9;
        scanf("%d", &num9);
        while(num9 > 2 || num9 < 1) {
            printf("\n   INVALID OPERATION!   \n");
            printf("Please choose 1 or 2: ");
            scanf("%d", &num9);
        }

        if(num9 == 1) {
            printf("\nEnter the amount to withdraw: $");
            int cash9;
            scanf("%d", &cash9);
            while(cash9 > ac[8]) {
                printf("\n   INSUFFICIENT BALANCE!  \n");
                printf("Your current balance is $%d\n", ac[8]);
                printf("Please enter a smaller amount: $");
                scanf("%d", &cash9);
            }
            
            ac[8] -= cash9;
            printf("\n========================================\n");
            printf("WITHDRAWAL SUCCESSFUL\n");
            printf("Amount Withdrawn: $%d\n", cash9);
            printf("Remaining Balance: $%d\n", ac[8]);
            printf("========================================\n");
        } 
        else if(num9 == 2) {
            printf("\nEnter the amount to deposit: $");
            int cash09;
            scanf("%d", &cash09);
            ac[8] += cash09;
            
            printf("\n========================================\n");
            printf("DEPOSIT SUCCESSFUL\n");
            printf("Amount Deposited: $%d\n", cash09);
            printf("New Balance: $%d\n", ac[8]);
            printf("========================================\n");
        }
    }

    else if(accnum == 10) {
        long long int p10;
        printf("\n========================================\n");
        printf("Account Number: 10\n");
        printf("Please enter your password: ");
        scanf("%lld", &p10);
        
        int attempts = 1;
        while(p10 != pass10) {
            attempts++;
            if(attempts > 3) {
                printf("\n   ACCOUNT BLOCKED DUE TO MULTIPLE INCORRECT PASSWORD ATTEMPTS!   \n");
                printf("========================================\n");
                return 0;
            }
            printf("\n   ACCESS DENIED - INCORRECT PASSWORD!  \n");
            printf("Please try again: ");
            scanf("%lld", &p10);
        }
        
        printf("\n========================================\n");
        printf("ACCESS GRANTED\n");
        printf("Account Holder: Hamza Khan\n");
        printf("Current Balance: $%d\n\n", ac[9]);
        
        printf("Please select an operation:\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("Your choice: ");
        
        int num10;
        scanf("%d", &num10);
        while(num10 > 2 || num10 < 1) {
            printf("\n   INVALID OPERATION!   \n");
            printf("Please choose 1 or 2: ");
            scanf("%d", &num10);
        }

        if(num10 == 1) {
            printf("\nEnter the amount to withdraw: $");
            int cash10;
            scanf("%d", &cash10);
            while(cash10 > ac[9]) {
                printf("\n   INSUFFICIENT BALANCE!   \n");
                printf("Your current balance is $%d\n", ac[9]);
                printf("Please enter a smaller amount: $");
                scanf("%d", &cash10);
            }
            
            ac[9] -= cash10;
            printf("\n========================================\n");
            printf("WITHDRAWAL SUCCESSFUL\n");
            printf("Amount Withdrawn: $%d\n", cash10);
            printf("Remaining Balance: $%d\n", ac[9]);
            printf("========================================\n");
        } 
        else if(num10 == 2) {
            printf("\nEnter the amount to deposit: $");
            int cash010;
            scanf("%d", &cash010);
            ac[9] += cash010;
            
            printf("\n========================================\n");
            printf("DEPOSIT SUCCESSFUL\n");
            printf("Amount Deposited: $%d\n", cash010);
            printf("New Balance: $%d\n", ac[9]);
            printf("========================================\n");
        }
    }

    return 0;
}
