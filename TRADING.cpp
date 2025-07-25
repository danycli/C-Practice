#include <stdio.h>

//A Virtual Stock Trading System by Danial Ahmed(136), Saad Khan(131) & Mudassir Khan(138)

int main() {
    
    printf("-----WELCOME TO BYTE STOCK TRADING SYSTEM------\n");

    //user balance
    int cash[10] = {10000, 15000, 8000, 20000, 12000, 9000, 25000, 11000, 13000, 18000};
    
	//protfolio
    int apple_stocks[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int google_stocks[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int tesla_stocks[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    int apple_price = 150;
    int google_price = 2500;
    int tesla_price = 200;
    
    long long int pass1 = 123, pass2 = 1234, pass3 = 12345, pass4 = 123456;
    long long int pass5 = 1234567, pass6 = 12345678, pass7 = 123456789;
    long long int pass8 = 1234567890, pass9 = 12345678910, pass10 = 1234567891011;
    
    int accnum;
    printf("Please enter your trader account number (1-10): ");
    scanf("%d", &accnum);
    
    while(accnum > 10 || accnum < 1) {
        printf("\n	INVALID TRADER ACCOUNT!  \n");
        printf("Please enter a valid account number (1-10): ");
        scanf("%d", &accnum);
    }

    if(accnum == 1) {
        long long int p1;
        printf("\n========================================\n");
        printf("Trader Account: 1\n");
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
        
        // Continuous trading loop
        int continue_trading = 1;
        while(continue_trading) {
            printf("\n========================================\n");
            printf("Available Cash: $%d\n", cash[0]);
            printf("Portfolio: AAPL=%d, GOOGL=%d, TSLA=%d\n\n", apple_stocks[0], google_stocks[0], tesla_stocks[0]);
            
            printf("=== TODAY'S STOCK PRICES ===\n");
            printf("1. Apple (AAPL): $%d\n", apple_price);
            printf("2. Google (GOOGL): $%d\n", google_price);
            printf("3. Tesla (TSLA): $%d\n", tesla_price);
            printf("=============================\n\n");
            
            printf("Please select an operation:\n");
            printf("1. Buy Stocks\n");
            printf("2. Sell Stocks\n");
            printf("3. Exit\n");
            printf("Your choice: ");
            
            int operation;
            scanf("%d", &operation);
            while(operation > 3 || operation < 1) {
                printf("\n   INVALID OPERATION!  \n");
                printf("Please choose 1, 2, or 3: ");
                scanf("%d", &operation);
            }

            if(operation == 3) {
                printf("\n========================================\n");
                printf("Thank you for using Byte Stock Trading System!\n");
                printf("Final Portfolio Summary:\n");
                printf("Cash: $%d\n", cash[0]);
                printf("AAPL: %d shares\n", apple_stocks[0]);
                printf("GOOGL: %d shares\n", google_stocks[0]);
                printf("TSLA: %d shares\n", tesla_stocks[0]);
                printf("========================================\n");
                continue_trading = 0;
                break;
            }

            if(operation == 1) {
                printf("\nWhich stock would you like to buy?\n");
                printf("1. Apple (AAPL) - $%d per share\n", apple_price);
                printf("2. Google (GOOGL) - $%d per share\n", google_price);
                printf("3. Tesla (TSLA) - $%d per share\n", tesla_price);
                printf("Your choice: ");
                
                int stock_choice;
                scanf("%d", &stock_choice);
                while(stock_choice > 3 || stock_choice < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice);
                }
                
                printf("\nHow many shares would you like to buy? ");
                int shares;
                scanf("%d", &shares);
                
                if(stock_choice == 1) {
                    int total_cost = shares * apple_price;
                    while(total_cost > cash[0]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost, cash[0]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares);
                        total_cost = shares * apple_price;
                    }
                    
                    cash[0] -= total_cost;
                    apple_stocks[0] += shares;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Apple at $%d each\n", shares, apple_price);
                    printf("Total Cost: $%d\n", total_cost);
                    printf("Remaining Cash: $%d\n", cash[0]);
                    printf("========================================\n");
                }
                else if(stock_choice == 2) {
                    int total_cost = shares * google_price;
                    while(total_cost > cash[0]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost, cash[0]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares);
                        total_cost = shares * google_price;
                    }
                    
                    cash[0] -= total_cost;
                    google_stocks[0] += shares;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Google at $%d each\n", shares, google_price);
                    printf("Total Cost: $%d\n", total_cost);
                    printf("Remaining Cash: $%d\n", cash[0]);
                    printf("========================================\n");
                }
                else if(stock_choice == 3) {
                    int total_cost = shares * tesla_price;
                    while(total_cost > cash[0]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost, cash[0]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares);
                        total_cost = shares * tesla_price;
                    }
                    
                    cash[0] -= total_cost;
                    tesla_stocks[0] += shares;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Tesla at $%d each\n", shares, tesla_price);
                    printf("Total Cost: $%d\n", total_cost);
                    printf("Remaining Cash: $%d\n", cash[0]);
                    printf("========================================\n");
                }
            }
            else if(operation == 2) {
                printf("\nWhich stock would you like to sell?\n");
                printf("1. Apple (AAPL) - You own %d shares - $%d per share\n", apple_stocks[0], apple_price);
                printf("2. Google (GOOGL) - You own %d shares - $%d per share\n", google_stocks[0], google_price);
                printf("3. Tesla (TSLA) - You own %d shares - $%d per share\n", tesla_stocks[0], tesla_price);
                printf("Your choice: ");
                
                int stock_choice;
                scanf("%d", &stock_choice);
                while(stock_choice > 3 || stock_choice < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice);
                }
                
                printf("\nHow many shares would you like to sell? ");
                int shares;
                scanf("%d", &shares);
                
                if(stock_choice == 1) {
                    while(shares > apple_stocks[0]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Apple\n", apple_stocks[0]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares);
                    }
                    
                    int total_value = shares * apple_price;
                    cash[0] += total_value;
                    apple_stocks[0] -= shares;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Apple at $%d each\n", shares, apple_price);
                    printf("Total Received: $%d\n", total_value);
                    printf("New Cash Balance: $%d\n", cash[0]);
                    printf("========================================\n");
                }
                else if(stock_choice == 2) {
                    while(shares > google_stocks[0]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Google\n", google_stocks[0]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares);
                    }
                    
                    int total_value = shares * google_price;
                    cash[0] += total_value;
                    google_stocks[0] -= shares;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Google at $%d each\n", shares, google_price);
                    printf("Total Received: $%d\n", total_value);
                    printf("New Cash Balance: $%d\n", cash[0]);
                    printf("========================================\n");
                }
                else if(stock_choice == 3) {
                    while(shares > tesla_stocks[0]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Tesla\n", tesla_stocks[0]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares);
                    }
                    
                    int total_value = shares * tesla_price;
                    cash[0] += total_value;
                    tesla_stocks[0] -= shares;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Tesla at $%d each\n", shares, tesla_price);
                    printf("Total Received: $%d\n", total_value);
                    printf("New Cash Balance: $%d\n", cash[0]);
                    printf("========================================\n");
                }
            }
        }
    }

    else if(accnum == 2) {
        long long int p2;
        printf("\n========================================\n");
        printf("Trader Account: 2\n");
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
        
        // Continuous trading loop for account 2
        int continue_trading = 1;
        while(continue_trading) {
            printf("\n========================================\n");
            printf("Available Cash: $%d\n", cash[1]);
            printf("Portfolio: AAPL=%d, GOOGL=%d, TSLA=%d\n\n", apple_stocks[1], google_stocks[1], tesla_stocks[1]);
            
            printf("=== TODAY'S STOCK PRICES ===\n");
            printf("1. Apple (AAPL): $%d\n", apple_price);
            printf("2. Google (GOOGL): $%d\n", google_price);
            printf("3. Tesla (TSLA): $%d\n", tesla_price);
            printf("=============================\n\n");
            
            printf("Please select an operation:\n");
            printf("1. Buy Stocks\n");
            printf("2. Sell Stocks\n");
            printf("3. Exit\n");
            printf("Your choice: ");
            
            int operation2;
            scanf("%d", &operation2);
            while(operation2 > 3 || operation2 < 1) {
                printf("\n	INVALID OPERATION!   \n");
                printf("Please choose 1, 2, or 3: ");
                scanf("%d", &operation2);
            }

            if(operation2 == 3) {
                printf("\n========================================\n");
                printf("Thank you for using Byte Stock Trading System!\n");
                printf("Final Portfolio Summary:\n");
                printf("Cash: $%d\n", cash[1]);
                printf("AAPL: %d shares\n", apple_stocks[1]);
                printf("GOOGL: %d shares\n", google_stocks[1]);
                printf("TSLA: %d shares\n", tesla_stocks[1]);
                printf("========================================\n");
                continue_trading = 0;
                break;
            }

            if(operation2 == 1) {
                printf("\nWhich stock would you like to buy?\n");
                printf("1. Apple (AAPL) - $%d per share\n", apple_price);
                printf("2. Google (GOOGL) - $%d per share\n", google_price);
                printf("3. Tesla (TSLA) - $%d per share\n", tesla_price);
                printf("Your choice: ");
                
                int stock_choice2;
                scanf("%d", &stock_choice2);
                while(stock_choice2 > 3 || stock_choice2 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice2);
                }
                
                printf("\nHow many shares would you like to buy? ");
                int shares2;
                scanf("%d", &shares2);
                
                if(stock_choice2 == 1) {
                    int total_cost2 = shares2 * apple_price;
                    while(total_cost2 > cash[1]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost2, cash[1]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares2);
                        total_cost2 = shares2 * apple_price;
                    }
                    
                    cash[1] -= total_cost2;
                    apple_stocks[1] += shares2;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Apple at $%d each\n", shares2, apple_price);
                    printf("Total Cost: $%d\n", total_cost2);
                    printf("Remaining Cash: $%d\n", cash[1]);
                    printf("========================================\n");
                }
                else if(stock_choice2 == 2) {
                    int total_cost2 = shares2 * google_price;
                    while(total_cost2 > cash[1]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost2, cash[1]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares2);
                        total_cost2 = shares2 * google_price;
                    }
                    
                    cash[1] -= total_cost2;
                    google_stocks[1] += shares2;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Google at $%d each\n", shares2, google_price);
                    printf("Total Cost: $%d\n", total_cost2);
                    printf("Remaining Cash: $%d\n", cash[1]);
                    printf("========================================\n");
                }
                else if(stock_choice2 == 3) {
                    int total_cost2 = shares2 * tesla_price;
                    while(total_cost2 > cash[1]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost2, cash[1]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares2);
                        total_cost2 = shares2 * tesla_price;
                    }
                    
                    cash[1] -= total_cost2;
                    tesla_stocks[1] += shares2;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Tesla at $%d each\n", shares2, tesla_price);
                    printf("Total Cost: $%d\n", total_cost2);
                    printf("Remaining Cash: $%d\n", cash[1]);
                    printf("========================================\n");
                }
            }
            else if(operation2 == 2) {
                printf("\nWhich stock would you like to sell?\n");
                printf("1. Apple (AAPL) - You own %d shares - $%d per share\n", apple_stocks[1], apple_price);
                printf("2. Google (GOOGL) - You own %d shares - $%d per share\n", google_stocks[1], google_price);
                printf("3. Tesla (TSLA) - You own %d shares - $%d per share\n", tesla_stocks[1], tesla_price);
                printf("Your choice: ");
                
                int stock_choice2;
                scanf("%d", &stock_choice2);
                while(stock_choice2 > 3 || stock_choice2 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice2);
                }
                
                printf("\nHow many shares would you like to sell? ");
                int shares2;
                scanf("%d", &shares2);
                
                if(stock_choice2 == 1) {
                    while(shares2 > apple_stocks[1]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Apple\n", apple_stocks[1]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares2);
                    }
                    
                    int total_value2 = shares2 * apple_price;
                    cash[1] += total_value2;
                    apple_stocks[1] -= shares2;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Apple at $%d each\n", shares2, apple_price);
                    printf("Total Received: $%d\n", total_value2);
                    printf("New Cash Balance: $%d\n", cash[1]);
                    printf("========================================\n");
                }
                else if(stock_choice2 == 2) {
                    while(shares2 > google_stocks[1]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Google\n", google_stocks[1]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares2);
                    }
                    
                    int total_value2 = shares2 * google_price;
                    cash[1] += total_value2;
                    google_stocks[1] -= shares2;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Google at $%d each\n", shares2, google_price);
                    printf("Total Received: $%d\n", total_value2);
                    printf("New Cash Balance: $%d\n", cash[1]);
                    printf("========================================\n");
                }
                else if(stock_choice2 == 3) {
                    while(shares2 > tesla_stocks[1]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Tesla\n", tesla_stocks[1]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares2);
                    }
                    
                    int total_value2 = shares2 * tesla_price;
                    cash[1] += total_value2;
                    tesla_stocks[1] -= shares2;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Tesla at $%d each\n", shares2, tesla_price);
                    printf("Total Received: $%d\n", total_value2);
                    printf("New Cash Balance: $%d\n", cash[1]);
                    printf("========================================\n");
                }
            }
        }
    }

    else if(accnum == 3) {
        long long int p3;
        printf("\n========================================\n");
        printf("Trader Account: 3\n");
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
        
        // Continuous trading loop for account 3
        int continue_trading = 1;
        while(continue_trading) {
            printf("\n========================================\n");
            printf("Available Cash: $%d\n", cash[2]);
            printf("Portfolio: AAPL=%d, GOOGL=%d, TSLA=%d\n\n", apple_stocks[2], google_stocks[2], tesla_stocks[2]);
            
            printf("=== TODAY'S STOCK PRICES ===\n");
            printf("1. Apple (AAPL): $%d\n", apple_price);
            printf("2. Google (GOOGL): $%d\n", google_price);
            printf("3. Tesla (TSLA): $%d\n", tesla_price);
            printf("=============================\n\n");
            
            printf("Please select an operation:\n");
            printf("1. Buy Stocks\n");
            printf("2. Sell Stocks\n");
            printf("3. Exit\n");
            printf("Your choice: ");
            
            int operation3;
            scanf("%d", &operation3);
            while(operation3 > 3 || operation3 < 1) {
                printf("\n	INVALID OPERATION!   \n");
                printf("Please choose 1, 2, or 3: ");
                scanf("%d", &operation3);
            }

            if(operation3 == 3) {
                printf("\n========================================\n");
                printf("Thank you for using Byte Stock Trading System!\n");
                printf("Final Portfolio Summary:\n");
                printf("Cash: $%d\n", cash[2]);
                printf("AAPL: %d shares\n", apple_stocks[2]);
                printf("GOOGL: %d shares\n", google_stocks[2]);
                printf("TSLA: %d shares\n", tesla_stocks[2]);
                printf("========================================\n");
                continue_trading = 0;
                break;
            }

            if(operation3 == 1) {
                printf("\nWhich stock would you like to buy?\n");
                printf("1. Apple (AAPL) - $%d per share\n", apple_price);
                printf("2. Google (GOOGL) - $%d per share\n", google_price);
                printf("3. Tesla (TSLA) - $%d per share\n", tesla_price);
                printf("Your choice: ");
                
                int stock_choice3;
                scanf("%d", &stock_choice3);
                while(stock_choice3 > 3 || stock_choice3 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice3);
                }
                
                printf("\nHow many shares would you like to buy? ");
                int shares3;
                scanf("%d", &shares3);
                
                if(stock_choice3 == 1) {
                    int total_cost3 = shares3 * apple_price;
                    while(total_cost3 > cash[2]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost3, cash[2]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares3);
                        total_cost3 = shares3 * apple_price;
                    }
                    
                    cash[2] -= total_cost3;
                    apple_stocks[2] += shares3;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Apple at $%d each\n", shares3, apple_price);
                    printf("Total Cost: $%d\n", total_cost3);
                    printf("Remaining Cash: $%d\n", cash[2]);
                    printf("========================================\n");
                }
                else if(stock_choice3 == 2) {
                    int total_cost3 = shares3 * google_price;
                    while(total_cost3 > cash[2]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost3, cash[2]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares3);
                        total_cost3 = shares3 * google_price;
                    }
                    
                    cash[2] -= total_cost3;
                    google_stocks[2] += shares3;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Google at $%d each\n", shares3, google_price);
                    printf("Total Cost: $%d\n", total_cost3);
                    printf("Remaining Cash: $%d\n", cash[2]);
                    printf("========================================\n");
                }
                else if(stock_choice3 == 3) {
                    int total_cost3 = shares3 * tesla_price;
                    while(total_cost3 > cash[2]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost3, cash[2]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares3);
                        total_cost3 = shares3 * tesla_price;
                    }
                    
                    cash[2] -= total_cost3;
                    tesla_stocks[2] += shares3;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Tesla at $%d each\n", shares3, tesla_price);
                    printf("Total Cost: $%d\n", total_cost3);
                    printf("Remaining Cash: $%d\n", cash[2]);
                    printf("========================================\n");
                }
            }
            else if(operation3 == 2) {
                printf("\nWhich stock would you like to sell?\n");
                printf("1. Apple (AAPL) - You own %d shares - $%d per share\n", apple_stocks[2], apple_price);
                printf("2. Google (GOOGL) - You own %d shares - $%d per share\n", google_stocks[2], google_price);
                printf("3. Tesla (TSLA) - You own %d shares - $%d per share\n", tesla_stocks[2], tesla_price);
                printf("Your choice: ");
                
                int stock_choice3;
                scanf("%d", &stock_choice3);
                while(stock_choice3 > 3 || stock_choice3 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice3);
                }
                
                                printf("\nHow many shares would you like to sell? ");
                int shares3;
                scanf("%d", &shares3);
                
                if(stock_choice3 == 1) {
                    while(shares3 > apple_stocks[2]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Apple\n", apple_stocks[2]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares3);
                    }
                    
                    int total_value3 = shares3 * apple_price;
                    cash[2] += total_value3;
                    apple_stocks[2] -= shares3;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Apple at $%d each\n", shares3, apple_price);
                    printf("Total Received: $%d\n", total_value3);
                    printf("New Cash Balance: $%d\n", cash[2]);
                    printf("========================================\n");
                }
                else if(stock_choice3 == 2) {
                    while(shares3 > google_stocks[2]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Google\n", google_stocks[2]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares3);
                    }
                    
                    int total_value3 = shares3 * google_price;
                    cash[2] += total_value3;
                    google_stocks[2] -= shares3;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Google at $%d each\n", shares3, google_price);
                    printf("Total Received: $%d\n", total_value3);
                    printf("New Cash Balance: $%d\n", cash[2]);
                    printf("========================================\n");
                }
                else if(stock_choice3 == 3) {
                    while(shares3 > tesla_stocks[2]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Tesla\n", tesla_stocks[2]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares3);
                    }
                    
                    int total_value3 = shares3 * tesla_price;
                    cash[2] += total_value3;
                    tesla_stocks[2] -= shares3;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Tesla at $%d each\n", shares3, tesla_price);
                    printf("Total Received: $%d\n", total_value3);
                    printf("New Cash Balance: $%d\n", cash[2]);
                    printf("========================================\n");
                }
            }
        }
    }

    else if(accnum == 4) {
        long long int p4;
        printf("\n========================================\n");
        printf("Trader Account: 4\n");
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
        printf("Account Holder: Muhammad Hamza\n");
        
        int continue_trading = 1;
        while(continue_trading) {
            printf("\n========================================\n");
            printf("Available Cash: $%d\n", cash[3]);
            printf("Portfolio: AAPL=%d, GOOGL=%d, TSLA=%d\n\n", apple_stocks[3], google_stocks[3], tesla_stocks[3]);
            
            printf("=== TODAY'S STOCK PRICES ===\n");
            printf("1. Apple (AAPL): $%d\n", apple_price);
            printf("2. Google (GOOGL): $%d\n", google_price);
            printf("3. Tesla (TSLA): $%d\n", tesla_price);
            printf("=============================\n\n");
            
            printf("Please select an operation:\n");
            printf("1. Buy Stocks\n");
            printf("2. Sell Stocks\n");
            printf("3. Exit\n");
            printf("Your choice: ");
            
            int operation4;
            scanf("%d", &operation4);
            while(operation4 > 3 || operation4 < 1) {
                printf("\n	INVALID OPERATION!   \n");
                printf("Please choose 1, 2, or 3: ");
                scanf("%d", &operation4);
            }

            if(operation4 == 3) {
                printf("\n========================================\n");
                printf("Thank you for using Byte Stock Trading System!\n");
                printf("Final Portfolio Summary:\n");
                printf("Cash: $%d\n", cash[3]);
                printf("AAPL: %d shares\n", apple_stocks[3]);
                printf("GOOGL: %d shares\n", google_stocks[3]);
                printf("TSLA: %d shares\n", tesla_stocks[3]);
                printf("========================================\n");
                continue_trading = 0;
                break;
            }

            if(operation4 == 1) {
                printf("\nWhich stock would you like to buy?\n");
                printf("1. Apple (AAPL) - $%d per share\n", apple_price);
                printf("2. Google (GOOGL) - $%d per share\n", google_price);
                printf("3. Tesla (TSLA) - $%d per share\n", tesla_price);
                printf("Your choice: ");
                
                int stock_choice4;
                scanf("%d", &stock_choice4);
                while(stock_choice4 > 3 || stock_choice4 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice4);
                }
                
                printf("\nHow many shares would you like to buy? ");
                int shares4;
                scanf("%d", &shares4);
                
                if(stock_choice4 == 1) {
                    int total_cost4 = shares4 * apple_price;
                    while(total_cost4 > cash[3]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost4, cash[3]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares4);
                        total_cost4 = shares4 * apple_price;
                    }
                    
                    cash[3] -= total_cost4;
                    apple_stocks[3] += shares4;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Apple at $%d each\n", shares4, apple_price);
                    printf("Total Cost: $%d\n", total_cost4);
                    printf("Remaining Cash: $%d\n", cash[3]);
                    printf("========================================\n");
                }
                else if(stock_choice4 == 2) {
                    int total_cost4 = shares4 * google_price;
                    while(total_cost4 > cash[3]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost4, cash[3]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares4);
                        total_cost4 = shares4 * google_price;
                    }
                    
                    cash[3] -= total_cost4;
                    google_stocks[3] += shares4;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Google at $%d each\n", shares4, google_price);
                    printf("Total Cost: $%d\n", total_cost4);
                    printf("Remaining Cash: $%d\n", cash[3]);
                    printf("========================================\n");
                }
                else if(stock_choice4 == 3) {
                    int total_cost4 = shares4 * tesla_price;
                    while(total_cost4 > cash[3]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost4, cash[3]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares4);
                        total_cost4 = shares4 * tesla_price;
                    }
                    
                    cash[3] -= total_cost4;
                    tesla_stocks[3] += shares4;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Tesla at $%d each\n", shares4, tesla_price);
                    printf("Total Cost: $%d\n", total_cost4);
                    printf("Remaining Cash: $%d\n", cash[3]);
                    printf("========================================\n");
                }
            }
            else if(operation4 == 2) {
                printf("\nWhich stock would you like to sell?\n");
                printf("1. Apple (AAPL) - You own %d shares - $%d per share\n", apple_stocks[3], apple_price);
                printf("2. Google (GOOGL) - You own %d shares - $%d per share\n", google_stocks[3], google_price);
                printf("3. Tesla (TSLA) - You own %d shares - $%d per share\n", tesla_stocks[3], tesla_price);
                printf("Your choice: ");
                
                int stock_choice4;
                scanf("%d", &stock_choice4);
                while(stock_choice4 > 3 || stock_choice4 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice4);
                }
                
                printf("\nHow many shares would you like to sell? ");
                int shares4;
                scanf("%d", &shares4);
                
                if(stock_choice4 == 1) {
                    while(shares4 > apple_stocks[3]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Apple\n", apple_stocks[3]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares4);
                    }
                    
                    int total_value4 = shares4 * apple_price;
                    cash[3] += total_value4;
                    apple_stocks[3] -= shares4;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Apple at $%d each\n", shares4, apple_price);
                    printf("Total Received: $%d\n", total_value4);
                    printf("New Cash Balance: $%d\n", cash[3]);
                    printf("========================================\n");
                }
                else if(stock_choice4 == 2) {
                    while(shares4 > google_stocks[3]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Google\n", google_stocks[3]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares4);
                    }
                    
                    int total_value4 = shares4 * google_price;
                    cash[3] += total_value4;
                    google_stocks[3] -= shares4;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Google at $%d each\n", shares4, google_price);
                    printf("Total Received: $%d\n", total_value4);
                    printf("New Cash Balance: $%d\n", cash[3]);
                    printf("========================================\n");
                }
                else if(stock_choice4 == 3) {
                    while(shares4 > tesla_stocks[3]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Tesla\n", tesla_stocks[3]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares4);
                    }
                    
                    int total_value4 = shares4 * tesla_price;
                    cash[3] += total_value4;
                    tesla_stocks[3] -= shares4;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Tesla at $%d each\n", shares4, tesla_price);
                    printf("Total Received: $%d\n", total_value4);
                    printf("New Cash Balance: $%d\n", cash[3]);
                    printf("========================================\n");
                }
            }
        }
    }

    else if(accnum == 5) {
        long long int p5;
        printf("\n========================================\n");
        printf("Trader Account: 5\n");
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
        printf("Account Holder: Muhammad Saad\n");
        
        int continue_trading = 1;
        while(continue_trading) {
            printf("\n========================================\n");
            printf("Available Cash: $%d\n", cash[4]);
            printf("Portfolio: AAPL=%d, GOOGL=%d, TSLA=%d\n\n", apple_stocks[4], google_stocks[4], tesla_stocks[4]);
            
            printf("=== TODAY'S STOCK PRICES ===\n");
            printf("1. Apple (AAPL): $%d\n", apple_price);
            printf("2. Google (GOOGL): $%d\n", google_price);
            printf("3. Tesla (TSLA): $%d\n", tesla_price);
            printf("=============================\n\n");
            
            printf("Please select an operation:\n");
            printf("1. Buy Stocks\n");
            printf("2. Sell Stocks\n");
            printf("3. Exit\n");
            printf("Your choice: ");
            
            int operation5;
            scanf("%d", &operation5);
            while(operation5 > 3 || operation5 < 1) {
                printf("\n	INVALID OPERATION!   \n");
                printf("Please choose 1, 2, or 3: ");
                scanf("%d", &operation5);
            }

            if(operation5 == 3) {
                printf("\n========================================\n");
                printf("Thank you for using Byte Stock Trading System!\n");
                printf("Final Portfolio Summary:\n");
                printf("Cash: $%d\n", cash[4]);
                printf("AAPL: %d shares\n", apple_stocks[4]);
                printf("GOOGL: %d shares\n", google_stocks[4]);
                printf("TSLA: %d shares\n", tesla_stocks[4]);
                printf("========================================\n");
                continue_trading = 0;
                break;
            }

            if(operation5 == 1) {
                printf("\nWhich stock would you like to buy?\n");
                printf("1. Apple (AAPL) - $%d per share\n", apple_price);
                printf("2. Google (GOOGL) - $%d per share\n", google_price);
                printf("3. Tesla (TSLA) - $%d per share\n", tesla_price);
                printf("Your choice: ");
                
                int stock_choice5;
                scanf("%d", &stock_choice5);
                while(stock_choice5 > 3 || stock_choice5 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice5);
                }
                
                printf("\nHow many shares would you like to buy? ");
                int shares5;
                scanf("%d", &shares5);
                
                if(stock_choice5 == 1) {
                    int total_cost5 = shares5 * apple_price;
                    while(total_cost5 > cash[4]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost5, cash[4]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares5);
                        total_cost5 = shares5 * apple_price;
                    }
                    
                    cash[4] -= total_cost5;
                    apple_stocks[4] += shares5;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Apple at $%d each\n", shares5, apple_price);
                    printf("Total Cost: $%d\n", total_cost5);
                    printf("Remaining Cash: $%d\n", cash[4]);
                    printf("========================================\n");
                }
                else if(stock_choice5 == 2) {
                    int total_cost5 = shares5 * google_price;
                    while(total_cost5 > cash[4]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost5, cash[4]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares5);
                        total_cost5 = shares5 * google_price;
                    }
                    
                    cash[4] -= total_cost5;
                    google_stocks[4] += shares5;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Google at $%d each\n", shares5, google_price);
                    printf("Total Cost: $%d\n", total_cost5);
                    printf("Remaining Cash: $%d\n", cash[4]);
                    printf("========================================\n");
                }
                else if(stock_choice5 == 3) {
                    int total_cost5 = shares5 * tesla_price;
                    while(total_cost5 > cash[4]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost5, cash[4]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares5);
                        total_cost5 = shares5 * tesla_price;
                    }
                    
                    cash[4] -= total_cost5;
                    tesla_stocks[4] += shares5;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Tesla at $%d each\n", shares5, tesla_price);
                    printf("Total Cost: $%d\n", total_cost5);
                    printf("Remaining Cash: $%d\n", cash[4]);
                    printf("========================================\n");
                }
            }
            else if(operation5 == 2) {
                printf("\nWhich stock would you like to sell?\n");
                printf("1. Apple (AAPL) - You own %d shares - $%d per share\n", apple_stocks[4], apple_price);
                printf("2. Google (GOOGL) - You own %d shares - $%d per share\n", google_stocks[4], google_price);
                printf("3. Tesla (TSLA) - You own %d shares - $%d per share\n", tesla_stocks[4], tesla_price);
                printf("Your choice: ");
                
                int stock_choice5;
                scanf("%d", &stock_choice5);
                while(stock_choice5 > 3 || stock_choice5 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice5);
                }
                
                printf("\nHow many shares would you like to sell? ");
                int shares5;
                scanf("%d", &shares5);
                
                if(stock_choice5 == 1) {
                    while(shares5 > apple_stocks[4]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Apple\n", apple_stocks[4]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares5);
                    }
                    
                    int total_value5 = shares5 * apple_price;
                    cash[4] += total_value5;
                    apple_stocks[4] -= shares5;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Apple at $%d each\n", shares5, apple_price);
                    printf("Total Received: $%d\n", total_value5);
                    printf("New Cash Balance: $%d\n", cash[4]);
                    printf("========================================\n");
                }
                else if(stock_choice5 == 2) {
                    while(shares5 > google_stocks[4]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Google\n", google_stocks[4]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares5);
                    }
                    
                    int total_value5 = shares5 * google_price;
                    cash[4] += total_value5;
                    google_stocks[4] -= shares5;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Google at $%d each\n", shares5, google_price);
                    printf("Total Received: $%d\n", total_value5);
                    printf("New Cash Balance: $%d\n", cash[4]);
                    printf("========================================\n");
                }
                else if(stock_choice5 == 3) {
                    while(shares5 > tesla_stocks[4]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Tesla\n", tesla_stocks[4]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares5);
                    }
                    
                    int total_value5 = shares5 * tesla_price;
                    cash[4] += total_value5;
                    tesla_stocks[4] -= shares5;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Tesla at $%d each\n", shares5, tesla_price);
                    printf("Total Received: $%d\n", total_value5);
                    printf("New Cash Balance: $%d\n", cash[4]);
                    printf("========================================\n");
                }
            }
        }
    }

    else if(accnum == 6) {
        long long int p6;
        printf("\n========================================\n");
        printf("Trader Account: 6\n");
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
        printf("Account Holder: Muhammad Mudassir\n");
        
        int continue_trading = 1;
        while(continue_trading) {
            printf("\n========================================\n");
            printf("Available Cash: $%d\n", cash[5]);
            printf("Portfolio: AAPL=%d, GOOGL=%d, TSLA=%d\n\n", apple_stocks[5], google_stocks[5], tesla_stocks[5]);
            
            printf("=== TODAY'S STOCK PRICES ===\n");
            printf("1. Apple (AAPL): $%d\n", apple_price);
            printf("2. Google (GOOGL): $%d\n", google_price);
            printf("3. Tesla (TSLA): $%d\n", tesla_price);
            printf("=============================\n\n");
            
            printf("Please select an operation:\n");
            printf("1. Buy Stocks\n");
            printf("2. Sell Stocks\n");
            printf("3. Exit\n");
            printf("Your choice: ");
            
            int operation6;
            scanf("%d", &operation6);
            while(operation6 > 3 || operation6 < 1) {
                printf("\n	INVALID OPERATION!   \n");
                printf("Please choose 1, 2, or 3: ");
                scanf("%d", &operation6);
            }

            if(operation6 == 3) {
                printf("\n========================================\n");
                printf("Thank you for using Byte Stock Trading System!\n");
                printf("Final Portfolio Summary:\n");
                printf("Cash: $%d\n", cash[5]);
                printf("AAPL: %d shares\n", apple_stocks[5]);
                printf("GOOGL: %d shares\n", google_stocks[5]);
                printf("TSLA: %d shares\n", tesla_stocks[5]);
                printf("========================================\n");
                continue_trading = 0;
                break;
            }

            if(operation6 == 1) {
                printf("\nWhich stock would you like to buy?\n");
                printf("1. Apple (AAPL) - $%d per share\n", apple_price);
                printf("2. Google (GOOGL) - $%d per share\n", google_price);
                printf("3. Tesla (TSLA) - $%d per share\n", tesla_price);
                printf("Your choice: ");
                
                int stock_choice6;
                scanf("%d", &stock_choice6);
                while(stock_choice6 > 3 || stock_choice6 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice6);
                }
                
                printf("\nHow many shares would you like to buy? ");
                int shares6;
                scanf("%d", &shares6);
                
                if(stock_choice6 == 1) {
                    int total_cost6 = shares6 * apple_price;
                    while(total_cost6 > cash[5]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost6, cash[5]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares6);
                        total_cost6 = shares6 * apple_price;
                    }
                    
                    cash[5] -= total_cost6;
                    apple_stocks[5] += shares6;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Apple at $%d each\n", shares6, apple_price);
                    printf("Total Cost: $%d\n", total_cost6);
                    printf("Remaining Cash: $%d\n", cash[5]);
                    printf("========================================\n");
                }
                else if(stock_choice6 == 2) {
                    int total_cost6 = shares6 * google_price;
                    while(total_cost6 > cash[5]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost6, cash[5]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares6);
                        total_cost6 = shares6 * google_price;
                    }
                    
                    cash[5] -= total_cost6;
                    google_stocks[5] += shares6;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Google at $%d each\n", shares6, google_price);
                    printf("Total Cost: $%d\n", total_cost6);
                    printf("Remaining Cash: $%d\n", cash[5]);
                    printf("========================================\n");
                }
                else if(stock_choice6 == 3) {
                    int total_cost6 = shares6 * tesla_price;
                    while(total_cost6 > cash[5]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost6, cash[5]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares6);
                        total_cost6 = shares6 * tesla_price;
                    }
                    
                    cash[5] -= total_cost6;
                    tesla_stocks[5] += shares6;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Tesla at $%d each\n", shares6, tesla_price);
                    printf("Total Cost: $%d\n", total_cost6);
                    printf("Remaining Cash: $%d\n", cash[5]);
                    printf("========================================\n");
                }
            }
            else if(operation6 == 2) {
                printf("\nWhich stock would you like to sell?\n");
                printf("1. Apple (AAPL) - You own %d shares - $%d per share\n", apple_stocks[5], apple_price);
                printf("2. Google (GOOGL) - You own %d shares - $%d per share\n", google_stocks[5], google_price);
                printf("3. Tesla (TSLA) - You own %d shares - $%d per share\n", tesla_stocks[5], tesla_price);
                printf("Your choice: ");
                
                int stock_choice6;
                scanf("%d", &stock_choice6);
                while(stock_choice6 > 3 || stock_choice6 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice6);
                }
                
                printf("\nHow many shares would you like to sell? ");
                int shares6;
                scanf("%d", &shares6);
                
                if(stock_choice6 == 1) {
                    while(shares6 > apple_stocks[5]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Apple\n", apple_stocks[5]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares6);
                    }
                    
                    int total_value6 = shares6 * apple_price;
                    cash[5] += total_value6;
                    apple_stocks[5] -= shares6;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Apple at $%d each\n", shares6, apple_price);
                    printf("Total Received: $%d\n", total_value6);
                    printf("New Cash Balance: $%d\n", cash[5]);
                    printf("========================================\n");
                }
                else if(stock_choice6 == 2) {
                    while(shares6 > google_stocks[5]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Google\n", google_stocks[5]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares6);
                    }
                    
                    int total_value6 = shares6 * google_price;
                    cash[5] += total_value6;
                    google_stocks[5] -= shares6;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Google at $%d each\n", shares6, google_price);
                    printf("Total Received: $%d\n", total_value6);
                    printf("New Cash Balance: $%d\n", cash[5]);
                    printf("========================================\n");
                }
                else if(stock_choice6 == 3) {
                    while(shares6 > tesla_stocks[5]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Tesla\n", tesla_stocks[5]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares6);
                    }
                    
                    int total_value6 = shares6 * tesla_price;
                    cash[5] += total_value6;
                    tesla_stocks[5] -= shares6;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Tesla at $%d each\n", shares6, tesla_price);
                    printf("Total Received: $%d\n", total_value6);
                    printf("New Cash Balance: $%d\n", cash[5]);
                    printf("========================================\n");
                }
            }
        }
    }

    else if(accnum == 7) {
        long long int p7;
        printf("\n========================================\n");
        printf("Trader Account: 7\n");
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
        printf("Account Holder: Muhammad Danial\n");
        
        int continue_trading = 1;
        while(continue_trading) {
            printf("\n========================================\n");
            printf("Available Cash: $%d\n", cash[6]);
            printf("Portfolio: AAPL=%d, GOOGL=%d, TSLA=%d\n\n", apple_stocks[6], google_stocks[6], tesla_stocks[6]);
            
            printf("=== TODAY'S STOCK PRICES ===\n");
            printf("1. Apple (AAPL): $%d\n", apple_price);
            printf("2. Google (GOOGL): $%d\n", google_price);
            printf("3. Tesla (TSLA): $%d\n", tesla_price);
            printf("=============================\n\n");
            
            printf("Please select an operation:\n");
            printf("1. Buy Stocks\n");
            printf("2. Sell Stocks\n");
            printf("3. Exit\n");
            printf("Your choice: ");
            
            int operation7;
            scanf("%d", &operation7);
            while(operation7 > 3 || operation7 < 1) {
                printf("\n	INVALID OPERATION!   \n");
                printf("Please choose 1, 2, or 3: ");
                scanf("%d", &operation7);
            }

                        if(operation7 == 3) {
                printf("\n========================================\n");
                printf("Thank you for using Byte Stock Trading System!\n");
                printf("Final Portfolio Summary:\n");
                printf("Cash: $%d\n", cash[6]);
                printf("AAPL: %d shares\n", apple_stocks[6]);
                printf("GOOGL: %d shares\n", google_stocks[6]);
                printf("TSLA: %d shares\n", tesla_stocks[6]);
                printf("========================================\n");
                continue_trading = 0;
                break;
            }

            if(operation7 == 1) {
                printf("\nWhich stock would you like to buy?\n");
                printf("1. Apple (AAPL) - $%d per share\n", apple_price);
                printf("2. Google (GOOGL) - $%d per share\n", google_price);
                printf("3. Tesla (TSLA) - $%d per share\n", tesla_price);
                printf("Your choice: ");
                
                int stock_choice7;
                scanf("%d", &stock_choice7);
                while(stock_choice7 > 3 || stock_choice7 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice7);
                }
                
                printf("\nHow many shares would you like to buy? ");
                int shares7;
                scanf("%d", &shares7);
                
                if(stock_choice7 == 1) {
                    int total_cost7 = shares7 * apple_price;
                    while(total_cost7 > cash[6]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost7, cash[6]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares7);
                        total_cost7 = shares7 * apple_price;
                    }
                    
                    cash[6] -= total_cost7;
                    apple_stocks[6] += shares7;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Apple at $%d each\n", shares7, apple_price);
                    printf("Total Cost: $%d\n", total_cost7);
                    printf("Remaining Cash: $%d\n", cash[6]);
                    printf("========================================\n");
                }
                else if(stock_choice7 == 2) {
                    int total_cost7 = shares7 * google_price;
                    while(total_cost7 > cash[6]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost7, cash[6]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares7);
                        total_cost7 = shares7 * google_price;
                    }
                    
                    cash[6] -= total_cost7;
                    google_stocks[6] += shares7;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Google at $%d each\n", shares7, google_price);
                    printf("Total Cost: $%d\n", total_cost7);
                    printf("Remaining Cash: $%d\n", cash[6]);
                    printf("========================================\n");
                }
                else if(stock_choice7 == 3) {
                    int total_cost7 = shares7 * tesla_price;
                    while(total_cost7 > cash[6]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost7, cash[6]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares7);
                        total_cost7 = shares7 * tesla_price;
                    }
                    
                    cash[6] -= total_cost7;
                    tesla_stocks[6] += shares7;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Tesla at $%d each\n", shares7, tesla_price);
                    printf("Total Cost: $%d\n", total_cost7);
                    printf("Remaining Cash: $%d\n", cash[6]);
                    printf("========================================\n");
                }
            }
            else if(operation7 == 2) {
                printf("\nWhich stock would you like to sell?\n");
                printf("1. Apple (AAPL) - You own %d shares - $%d per share\n", apple_stocks[6], apple_price);
                printf("2. Google (GOOGL) - You own %d shares - $%d per share\n", google_stocks[6], google_price);
                printf("3. Tesla (TSLA) - You own %d shares - $%d per share\n", tesla_stocks[6], tesla_price);
                printf("Your choice: ");
                
                int stock_choice7;
                scanf("%d", &stock_choice7);
                while(stock_choice7 > 3 || stock_choice7 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice7);
                }
                
                printf("\nHow many shares would you like to sell? ");
                int shares7;
                scanf("%d", &shares7);
                
                if(stock_choice7 == 1) {
                    while(shares7 > apple_stocks[6]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Apple\n", apple_stocks[6]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares7);
                    }
                    
                    int total_value7 = shares7 * apple_price;
                    cash[6] += total_value7;
                    apple_stocks[6] -= shares7;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Apple at $%d each\n", shares7, apple_price);
                    printf("Total Received: $%d\n", total_value7);
                    printf("New Cash Balance: $%d\n", cash[6]);
                    printf("========================================\n");
                }
                else if(stock_choice7 == 2) {
                    while(shares7 > google_stocks[6]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Google\n", google_stocks[6]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares7);
                    }
                    
                    int total_value7 = shares7 * google_price;
                    cash[6] += total_value7;
                    google_stocks[6] -= shares7;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Google at $%d each\n", shares7, google_price);
                    printf("Total Received: $%d\n", total_value7);
                    printf("New Cash Balance: $%d\n", cash[6]);
                    printf("========================================\n");
                }
                else if(stock_choice7 == 3) {
                    while(shares7 > tesla_stocks[6]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Tesla\n", tesla_stocks[6]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares7);
                    }
                    
                    int total_value7 = shares7 * tesla_price;
                    cash[6] += total_value7;
                    tesla_stocks[6] -= shares7;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Tesla at $%d each\n", shares7, tesla_price);
                    printf("Total Received: $%d\n", total_value7);
                    printf("New Cash Balance: $%d\n", cash[6]);
                    printf("========================================\n");
                }
            }
        }
    }

    else if(accnum == 8) {
        long long int p8;
        printf("\n========================================\n");
        printf("Trader Account: 8\n");
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
        printf("Account Holder: Muhammad Usman\n");
        
        int continue_trading = 1;
        while(continue_trading) {
            printf("\n========================================\n");
            printf("Available Cash: $%d\n", cash[7]);
            printf("Portfolio: AAPL=%d, GOOGL=%d, TSLA=%d\n\n", apple_stocks[7], google_stocks[7], tesla_stocks[7]);
            
            printf("=== TODAY'S STOCK PRICES ===\n");
            printf("1. Apple (AAPL): $%d\n", apple_price);
            printf("2. Google (GOOGL): $%d\n", google_price);
            printf("3. Tesla (TSLA): $%d\n", tesla_price);
            printf("=============================\n\n");
            
            printf("Please select an operation:\n");
            printf("1. Buy Stocks\n");
            printf("2. Sell Stocks\n");
            printf("3. Exit\n");
            printf("Your choice: ");
            
            int operation8;
            scanf("%d", &operation8);
            while(operation8 > 3 || operation8 < 1) {
                printf("\n	INVALID OPERATION!   \n");
                printf("Please choose 1, 2, or 3: ");
                scanf("%d", &operation8);
            }

            if(operation8 == 3) {
                printf("\n========================================\n");
                printf("Thank you for using Byte Stock Trading System!\n");
                printf("Final Portfolio Summary:\n");
                printf("Cash: $%d\n", cash[7]);
                printf("AAPL: %d shares\n", apple_stocks[7]);
                printf("GOOGL: %d shares\n", google_stocks[7]);
                printf("TSLA: %d shares\n", tesla_stocks[7]);
                printf("========================================\n");
                continue_trading = 0;
                break;
            }

            if(operation8 == 1) {
                printf("\nWhich stock would you like to buy?\n");
                printf("1. Apple (AAPL) - $%d per share\n", apple_price);
                printf("2. Google (GOOGL) - $%d per share\n", google_price);
                printf("3. Tesla (TSLA) - $%d per share\n", tesla_price);
                printf("Your choice: ");
                
                int stock_choice8;
                scanf("%d", &stock_choice8);
                while(stock_choice8 > 3 || stock_choice8 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice8);
                }
                
                printf("\nHow many shares would you like to buy? ");
                int shares8;
                scanf("%d", &shares8);
                
                if(stock_choice8 == 1) {
                    int total_cost8 = shares8 * apple_price;
                    while(total_cost8 > cash[7]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost8, cash[7]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares8);
                        total_cost8 = shares8 * apple_price;
                    }
                    
                    cash[7] -= total_cost8;
                    apple_stocks[7] += shares8;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Apple at $%d each\n", shares8, apple_price);
                    printf("Total Cost: $%d\n", total_cost8);
                    printf("Remaining Cash: $%d\n", cash[7]);
                    printf("========================================\n");
                }
                else if(stock_choice8 == 2) {
                    int total_cost8 = shares8 * google_price;
                    while(total_cost8 > cash[7]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost8, cash[7]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares8);
                        total_cost8 = shares8 * google_price;
                    }
                    
                    cash[7] -= total_cost8;
                    google_stocks[7] += shares8;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Google at $%d each\n", shares8, google_price);
                    printf("Total Cost: $%d\n", total_cost8);
                    printf("Remaining Cash: $%d\n", cash[7]);
                    printf("========================================\n");
                }
                else if(stock_choice8 == 3) {
                    int total_cost8 = shares8 * tesla_price;
                    while(total_cost8 > cash[7]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost8, cash[7]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares8);
                        total_cost8 = shares8 * tesla_price;
                    }
                    
                    cash[7] -= total_cost8;
                    tesla_stocks[7] += shares8;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Tesla at $%d each\n", shares8, tesla_price);
                    printf("Total Cost: $%d\n", total_cost8);
                    printf("Remaining Cash: $%d\n", cash[7]);
                    printf("========================================\n");
                }
            }
            else if(operation8 == 2) {
                printf("\nWhich stock would you like to sell?\n");
                printf("1. Apple (AAPL) - You own %d shares - $%d per share\n", apple_stocks[7], apple_price);
                printf("2. Google (GOOGL) - You own %d shares - $%d per share\n", google_stocks[7], google_price);
                printf("3. Tesla (TSLA) - You own %d shares - $%d per share\n", tesla_stocks[7], tesla_price);
                printf("Your choice: ");
                
                int stock_choice8;
                scanf("%d", &stock_choice8);
                while(stock_choice8 > 3 || stock_choice8 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice8);
                }
                
                printf("\nHow many shares would you like to sell? ");
                int shares8;
                scanf("%d", &shares8);
                
                if(stock_choice8 == 1) {
                    while(shares8 > apple_stocks[7]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Apple\n", apple_stocks[7]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares8);
                    }
                    
                    int total_value8 = shares8 * apple_price;
                    cash[7] += total_value8;
                    apple_stocks[7] -= shares8;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Apple at $%d each\n", shares8, apple_price);
                    printf("Total Received: $%d\n", total_value8);
                    printf("New Cash Balance: $%d\n", cash[7]);
                    printf("========================================\n");
                }
                else if(stock_choice8 == 2) {
                    while(shares8 > google_stocks[7]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Google\n", google_stocks[7]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares8);
                    }
                    
                    int total_value8 = shares8 * google_price;
                    cash[7] += total_value8;
                    google_stocks[7] -= shares8;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Google at $%d each\n", shares8, google_price);
                    printf("Total Received: $%d\n", total_value8);
                    printf("New Cash Balance: $%d\n", cash[7]);
                    printf("========================================\n");
                }
                else if(stock_choice8 == 3) {
                    while(shares8 > tesla_stocks[7]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Tesla\n", tesla_stocks[7]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares8);
                    }
                    
                    int total_value8 = shares8 * tesla_price;
                    cash[7] += total_value8;
                    tesla_stocks[7] -= shares8;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Tesla at $%d each\n", shares8, tesla_price);
                    printf("Total Received: $%d\n", total_value8);
                    printf("New Cash Balance: $%d\n", cash[7]);
                    printf("========================================\n");
                }
            }
        }
    }

    else if(accnum == 9) {
        long long int p9;
        printf("\n========================================\n");
        printf("Trader Account: 9\n");
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
        printf("Account Holder: Muhammad Ali\n");
        
        int continue_trading = 1;
        while(continue_trading) {
            printf("\n========================================\n");
            printf("Available Cash: $%d\n", cash[8]);
            printf("Portfolio: AAPL=%d, GOOGL=%d, TSLA=%d\n\n", apple_stocks[8], google_stocks[8], tesla_stocks[8]);
            
            printf("=== TODAY'S STOCK PRICES ===\n");
            printf("1. Apple (AAPL): $%d\n", apple_price);
            printf("2. Google (GOOGL): $%d\n", google_price);
            printf("3. Tesla (TSLA): $%d\n", tesla_price);
            printf("=============================\n\n");
            
            printf("Please select an operation:\n");
            printf("1. Buy Stocks\n");
            printf("2. Sell Stocks\n");
            printf("3. Exit\n");
            printf("Your choice: ");
            
            int operation9;
            scanf("%d", &operation9);
            while(operation9 > 3 || operation9 < 1) {
                printf("\n	INVALID OPERATION!   \n");
                printf("Please choose 1, 2, or 3: ");
                scanf("%d", &operation9);
            }

            if(operation9 == 3) {
                printf("\n========================================\n");
                printf("Thank you for using Byte Stock Trading System!\n");
                printf("Final Portfolio Summary:\n");
                printf("Cash: $%d\n", cash[8]);
                printf("AAPL: %d shares\n", apple_stocks[8]);
                printf("GOOGL: %d shares\n", google_stocks[8]);
                printf("TSLA: %d shares\n", tesla_stocks[8]);
                printf("========================================\n");
                continue_trading = 0;
                break;
            }

            if(operation9 == 1) {
                printf("\nWhich stock would you like to buy?\n");
                printf("1. Apple (AAPL) - $%d per share\n", apple_price);
                printf("2. Google (GOOGL) - $%d per share\n", google_price);
                printf("3. Tesla (TSLA) - $%d per share\n", tesla_price);
                printf("Your choice: ");
                
                int stock_choice9;
                scanf("%d", &stock_choice9);
                while(stock_choice9 > 3 || stock_choice9 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice9);
                }
                
                printf("\nHow many shares would you like to buy? ");
                int shares9;
                scanf("%d", &shares9);
                
                if(stock_choice9 == 1) {
                    int total_cost9 = shares9 * apple_price;
                    while(total_cost9 > cash[8]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost9, cash[8]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares9);
                        total_cost9 = shares9 * apple_price;
                    }
                    
                    cash[8] -= total_cost9;
                    apple_stocks[8] += shares9;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Apple at $%d each\n", shares9, apple_price);
                    printf("Total Cost: $%d\n", total_cost9);
                    printf("Remaining Cash: $%d\n", cash[8]);
                    printf("========================================\n");
                }
                else if(stock_choice9 == 2) {
                    int total_cost9 = shares9 * google_price;
                    while(total_cost9 > cash[8]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost9, cash[8]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares9);
                        total_cost9 = shares9 * google_price;
                    }
                    
                    cash[8] -= total_cost9;
                    google_stocks[8] += shares9;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Google at $%d each\n", shares9, google_price);
                    printf("Total Cost: $%d\n", total_cost9);
                    printf("Remaining Cash: $%d\n", cash[8]);
                    printf("========================================\n");
                }
                else if(stock_choice9 == 3) {
                    int total_cost9 = shares9 * tesla_price;
                    while(total_cost9 > cash[8]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost9, cash[8]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares9);
                        total_cost9 = shares9 * tesla_price;
                    }
                    
                    cash[8] -= total_cost9;
                    tesla_stocks[8] += shares9;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Tesla at $%d each\n", shares9, tesla_price);
                    printf("Total Cost: $%d\n", total_cost9);
                    printf("Remaining Cash: $%d\n", cash[8]);
                    printf("========================================\n");
                }
            }
            else if(operation9 == 2) {
                printf("\nWhich stock would you like to sell?\n");
                printf("1. Apple (AAPL) - You own %d shares - $%d per share\n", apple_stocks[8], apple_price);
                printf("2. Google (GOOGL) - You own %d shares - $%d per share\n", google_stocks[8], google_price);
                printf("3. Tesla (TSLA) - You own %d shares - $%d per share\n", tesla_stocks[8], tesla_price);
                printf("Your choice: ");
                
                int stock_choice9;
                scanf("%d", &stock_choice9);
                while(stock_choice9 > 3 || stock_choice9 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice9);
                }
                
                printf("\nHow many shares would you like to sell? ");
                int shares9;
                scanf("%d", &shares9);
                
                if(stock_choice9 == 1) {
                    while(shares9 > apple_stocks[8]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Apple\n", apple_stocks[8]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares9);
                    }
                    
                    int total_value9 = shares9 * apple_price;
                    cash[8] += total_value9;
                    apple_stocks[8] -= shares9;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Apple at $%d each\n", shares9, apple_price);
                    printf("Total Received: $%d\n", total_value9);
                    printf("New Cash Balance: $%d\n", cash[8]);
                    printf("========================================\n");
                }
                else if(stock_choice9 == 2) {
                    while(shares9 > google_stocks[8]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Google\n", google_stocks[8]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares9);
                    }
                    
                    int total_value9 = shares9 * google_price;
                    cash[8] += total_value9;
                    google_stocks[8] -= shares9;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Google at $%d each\n", shares9, google_price);
                    printf("Total Received: $%d\n", total_value9);
                    printf("New Cash Balance: $%d\n", cash[8]);
                    printf("========================================\n");
                }
                else if(stock_choice9 == 3) {
                    while(shares9 > tesla_stocks[8]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Tesla\n", tesla_stocks[8]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares9);
                    }
                    
                    int total_value9 = shares9 * tesla_price;
                    cash[8] += total_value9;
                    tesla_stocks[8] -= shares9;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Tesla at $%d each\n", shares9, tesla_price);
                    printf("Total Received: $%d\n", total_value9);
                    printf("New Cash Balance: $%d\n", cash[8]);
                    printf("========================================\n");
                }
            }
        }
    }

    else if(accnum == 10) {
        long long int p10;
        printf("\n========================================\n");
        printf("Trader Account: 10\n");
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
            printf("\n   ACCESS DENIED - INCORRECT PASSWORD!   \n");
            printf("Please try again: ");
            scanf("%lld", &p10);
        }
        
        printf("\n========================================\n");
        printf("ACCESS GRANTED\n");
        printf("Account Holder: Muhammad Ahmed\n");
        
        int continue_trading = 1;
        while(continue_trading) {
            printf("\n========================================\n");
            printf("Available Cash: $%d\n", cash[9]);
            printf("Portfolio: AAPL=%d, GOOGL=%d, TSLA=%d\n\n", apple_stocks[9], google_stocks[9], tesla_stocks[9]);
            
            printf("=== TODAY'S STOCK PRICES ===\n");
            printf("1. Apple (AAPL): $%d\n", apple_price);
            printf("2. Google (GOOGL): $%d\n", google_price);
            printf("3. Tesla (TSLA): $%d\n", tesla_price);
            printf("=============================\n\n");
            
            printf("Please select an operation:\n");
            printf("1. Buy Stocks\n");
            printf("2. Sell Stocks\n");
            printf("3. Exit\n");
            printf("Your choice: ");
            
            int operation10;
            scanf("%d", &operation10);
            while(operation10 > 3 || operation10 < 1) {
                printf("\n	INVALID OPERATION!   \n");
                printf("Please choose 1, 2, or 3: ");
                scanf("%d", &operation10);
            }

            if(operation10 == 3) {
                printf("\n========================================\n");
                printf("Thank you for using Byte Stock Trading System!\n");
                printf("Final Portfolio Summary:\n");
                printf("Cash: $%d\n", cash[9]);
                printf("AAPL: %d shares\n", apple_stocks[9]);
                printf("GOOGL: %d shares\n", google_stocks[9]);
                printf("TSLA: %d shares\n", tesla_stocks[9]);
                printf("========================================\n");
                continue_trading = 0;
                break;
            }

            if(operation10 == 1) {
                printf("\nWhich stock would you like to buy?\n");
                printf("1. Apple (AAPL) - $%d per share\n", apple_price);
                printf("2. Google (GOOGL) - $%d per share\n", google_price);
                printf("3. Tesla (TSLA) - $%d per share\n", tesla_price);
                printf("Your choice: ");
                
                int stock_choice10;
                scanf("%d", &stock_choice10);
                while(stock_choice10 > 3 || stock_choice10 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice10);
                }
                
                printf("\nHow many shares would you like to buy? ");
                int shares10;
                scanf("%d", &shares10);
                
                if(stock_choice10 == 1) {
                    int total_cost10 = shares10 * apple_price;
                    while(total_cost10 > cash[9]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost10, cash[9]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares10);
                        total_cost10 = shares10 * apple_price;
                    }
                    
                    cash[9] -= total_cost10;
                    apple_stocks[9] += shares10;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Apple at $%d each\n", shares10, apple_price);
                    printf("Total Cost: $%d\n", total_cost10);
                    printf("Remaining Cash: $%d\n", cash[9]);
                    printf("========================================\n");
                }
                else if(stock_choice10 == 2) {
                    int total_cost10 = shares10 * google_price;
                    while(total_cost10 > cash[9]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost10, cash[9]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares10);
                        total_cost10 = shares10 * google_price;
                    }
                    
                    cash[9] -= total_cost10;
                    google_stocks[9] += shares10;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Google at $%d each\n", shares10, google_price);
                    printf("Total Cost: $%d\n", total_cost10);
                    printf("Remaining Cash: $%d\n", cash[9]);
                    printf("========================================\n");
                }
                else if(stock_choice10 == 3) {
                    int total_cost10 = shares10 * tesla_price;
                    while(total_cost10 > cash[9]) {
                        printf("\n   INSUFFICIENT FUNDS!   \n");
                        printf("Total cost: $%d, Available cash: $%d\n", total_cost10, cash[9]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares10);
                        total_cost10 = shares10 * tesla_price;
                    }
                    
                    cash[9] -= total_cost10;
                    tesla_stocks[9] += shares10;
                    printf("\n========================================\n");
                    printf("PURCHASE SUCCESSFUL\n");
                    printf("Bought %d shares of Tesla at $%d each\n", shares10, tesla_price);
                    printf("Total Cost: $%d\n", total_cost10);
                    printf("Remaining Cash: $%d\n", cash[9]);
                    printf("========================================\n");
                }
            }
                            else if(operation10 == 2) {
                printf("\nWhich stock would you like to sell?\n");
                printf("1. Apple (AAPL) - You own %d shares - $%d per share\n", apple_stocks[9], apple_price);
                printf("2. Google (GOOGL) - You own %d shares - $%d per share\n", google_stocks[9], google_price);
                printf("3. Tesla (TSLA) - You own %d shares - $%d per share\n", tesla_stocks[9], tesla_price);
                printf("Your choice: ");
                
                int stock_choice10;
                scanf("%d", &stock_choice10);
                while(stock_choice10 > 3 || stock_choice10 < 1) {
                    printf("\n   INVALID STOCK CHOICE!  \n");
                    printf("Please choose 1, 2, or 3: ");
                    scanf("%d", &stock_choice10);
                }
                
                printf("\nHow many shares would you like to sell? ");
                int shares10;
                scanf("%d", &shares10);
                
                if(stock_choice10 == 1) {
                    while(shares10 > apple_stocks[9]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Apple\n", apple_stocks[9]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares10);
                    }
                    
                    int total_value10 = shares10 * apple_price;
                    cash[9] += total_value10;
                    apple_stocks[9] -= shares10;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Apple at $%d each\n", shares10, apple_price);
                    printf("Total Received: $%d\n", total_value10);
                    printf("New Cash Balance: $%d\n", cash[9]);
                    printf("========================================\n");
                }
                else if(stock_choice10 == 2) {
                    while(shares10 > google_stocks[9]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Google\n", google_stocks[9]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares10);
                    }
                    
                    int total_value10 = shares10 * google_price;
                    cash[9] += total_value10;
                    google_stocks[9] -= shares10;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Google at $%d each\n", shares10, google_price);
                    printf("Total Received: $%d\n", total_value10);
                    printf("New Cash Balance: $%d\n", cash[9]);
                    printf("========================================\n");
                }
                else if(stock_choice10 == 3) {
                    while(shares10 > tesla_stocks[9]) {
                        printf("\n   INSUFFICIENT SHARES!   \n");
                        printf("You only own %d shares of Tesla\n", tesla_stocks[9]);
                        printf("Please enter fewer shares: ");
                        scanf("%d", &shares10);
                    }
                    
                    int total_value10 = shares10 * tesla_price;
                    cash[9] += total_value10;
                    tesla_stocks[9] -= shares10;
                    printf("\n========================================\n");
                    printf("SALE SUCCESSFUL\n");
                    printf("Sold %d shares of Tesla at $%d each\n", shares10, tesla_price);
                    printf("Total Received: $%d\n", total_value10);
                    printf("New Cash Balance: $%d\n", cash[9]);
                    printf("========================================\n");
                }
            }
        }
    }

    return 0;
}
