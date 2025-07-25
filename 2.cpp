#include <stdio.h>

int main() {
    int correct_pass = 12345;
    int user_pass;
    int max_attempts = 3;
    int attempts = 0;

    printf("Enter your password: ");
    scanf("%d", &user_pass);

    // Outer loop (controls total attempts)
    for (int i = 0; i < max_attempts; i++) {
        attempts++;

        // Inner loop (just for demonstration, not really needed here)
        while (user_pass != correct_pass) {
            printf("Access Denied (Attempt %d/%d)\n", attempts, max_attempts);
            printf("Try again: ");
            scanf("%d", &user_pass);
            attempts++;
            
            if (attempts >= max_attempts) {
                printf("Too many attempts. Locked out.\n");
                return 0;  // Exit program
            }
        }

        // If password is correct, break outer loop
        if (user_pass == correct_pass) {
            break;
        }
    }

    // Final check
    if (user_pass == correct_pass) {
        printf("Access Granted!\n");
    } else {
        printf("Too many failed attempts.\n");
    }

    return 0;
}
