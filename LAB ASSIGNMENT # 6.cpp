#include <stdio.h>

int countVowels(char str[], int i) {
    if (str[i] == '\0')
        return 0;
    
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        return 1 + countVowels(str, i + 1);
    else
        return countVowels(str, i + 1);
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    
    printf("Number of vowels: %d\n", countVowels(str, 0));
    
    return 0;
}
