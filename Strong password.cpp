#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice;
    char password[100];
    int upper = 0, lower = 0, digit = 0, symbol = 0, space = 0, score = 0;
    int length = 0;

    char common[10][20] = {"password", "123456", "admin", "qwerty", "letmein", "12345678", "abc123", "welcome", "pass", "123456789"};

    printf("\n===============================================\n");
    printf("        PASSWORD STRENGTH CHECKER             \n");
    printf("===============================================\n");

    while (1) {
        printf("\nMain Menu\n");
        printf("1. Check a Password\n");
        printf("2. Suggest Strong Passwords\n");
        printf("3. Generate Random Password\n");
        printf("4. Exit\n");
        printf("Choose an option (1-4): ");
        scanf("%d", &choice);
        getchar(); // clear buffer

        if (choice == 1) {
            printf("\nEnter your password: ");
            fgets(password, sizeof(password), stdin);
            password[strcspn(password, "\n")] = 0; // remove newline
            
            length = strlen(password);
            upper = lower = digit = symbol = space = 0;
            score = 0;

            for (int i = 0; i < length; i++) {
                if (password[i] >= 'A' && password[i] <= 'Z') upper = 1;
                else if (password[i] >= 'a' && password[i] <= 'z') lower = 1;
                else if (password[i] >= '0' && password[i] <= '9') digit = 1;
                else if (password[i] == ' ') space = 1;
                else symbol = 1;
            }

            for (int i = 0; i < 10; i++) {
                if (strcmp(password, common[i]) == 0) {
                    printf("\nThis password is too common!\n");
                    score -= 20;
                    break;
                }
            }

            if (length >= 12) score += 30;
            else if (length >= 8) score += 20;
            else if (length >= 6) score += 10;

            if (upper) score += 10;
            if (lower) score += 10;
            if (digit) score += 10;
            if (symbol) score += 10;
            if (space) {
                printf("Avoid using spaces in passwords!\n");
                score -= 5;
            }

            if (score < 0) score = 0;

            printf("\nPassword Length: %d\n", length);
            printf("Strength Score: %d / 100\n", score);
            printf("Contains Uppercase: %s\n", upper ? "Yes" : "No");
            printf("Contains Lowercase: %s\n", lower ? "Yes" : "No");
            printf("Contains Digits: %s\n", digit ? "Yes" : "No");
            printf("Contains Symbols: %s\n", symbol ? "Yes" : "No");

            printf("\nStrength Level: ");
            if (score >= 80) printf("Very Strong\n");
            else if (score >= 60) printf("Strong\n");
            else if (score >= 40) printf("Medium\n");
            else if (score >= 20) printf("Weak\n");
            else printf("Very Weak\n");
        }

        else if (choice == 2) {
            printf("\nExamples of Strong Passwords:\n");
            printf("1. DanY@2025_Rocks!\n");
            printf("2. MyLaptop#is$Beast123\n");
            printf("3. Th3Game_W1nn3r$\n");
        }

        else if (choice == 3) {
            char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*";
            char randPass[13];
            srand(time(0));
            for (int i = 0; i < 12; i++) {
                randPass[i] = chars[rand() % strlen(chars)];
            }
            randPass[12] = '\0';
            printf("\nRandom Strong Password: %s\n", randPass);
        }

        else if (choice == 4) {
            printf("\nThanks for using the Password Strength Checker!\n");
            break;
        }

        else {
            printf("\nInvalid option. Please try again.\n");
        }
    }

    return 0;
}
