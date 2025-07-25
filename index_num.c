#include <stdio.h>

int main() {
    char str[100];
    char ch;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Read string with spaces

    getchar();  // clear newline from buffer

    printf("Enter character to find: ");
    scanf("%c", &ch);  // Read the character to search for

    printf("Indexes of '%c' in \"%s\":\n", ch, str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("Found at index: %d\n", i);
        }
    }

    return 0;
}
