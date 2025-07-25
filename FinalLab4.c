#include<stdio.h>
#include<string.h>

int main() {
    FILE *fptr;
    char str[100];
    char strings[5][100];
    for(int i = 0; i < 5; i++) {
        fgets(strings[i], sizeof(strings[i]), stdin);
        strings[i][strcspn(strings[i], "\n")] = 0;
    }
    fptr = fopen("strings.txt", "w");
    for(int i = 0; i < 5; i++) {
        fputs(strings[i], fptr);
        fputc('\n', fptr);
    }
    fclose(fptr);

    fptr = fopen("strings.txt", "r");
    while(fgets(str, sizeof(str), fptr)) {
        for(int i = 0; str[i]; i++) {
            if(str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
        }
        printf("%s", str);
    }
    fclose(fptr);
    return 0;
}