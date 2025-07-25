#include<stdio.h>
#include<string.h>

int countVowels(char *s) {
    if(*s == '\0') return 0;
    char c = *s;
    if(c >= 'A' && c <= 'Z') c = c + 32;
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1 + countVowels(s + 1);
    return countVowels(s + 1);
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    printf("%d\n", countVowels(str));
    return 0;   
}