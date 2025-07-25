#include <stdio.h>

void countVowels(char str[], int i, int *count) {
    if (str[i] == '\0')
        return;
    for(int i = 0; i<='\0'; i++){
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        (*count)++;
    }
    
    countVowels(str, i + 1, count);
}

int main() {
    char str[100];
    int vowelCount = 0;
    
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    
    countVowels(str, 0, &vowelCount);
    
    printf("Number of vowels: %d\n", vowelCount);
    
    return 0;
}