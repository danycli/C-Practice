#include <stdio.h>
#include <conio.h>

int main() {
    char ch;
    int num = 0, count = 0;
    int maxDigits = 3;  // max digits allowed

    printf("Enter a %d-digit number (no Enter needed): ", maxDigits);

    while (count < maxDigits) {
        ch = getch();

        if (ch >= '0' && ch <= '9') {
            printf("%c", ch); // show typed digit
            num = num * 10 + (ch - '0');
            count++;
        }
    }

    printf("\nYou entered: %d\n", num);

    return 0;
}

