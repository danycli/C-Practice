#include<stdio.h>
#include<string.h>

int main() {
    char line[256];
    FILE *fptr;
    int spaceCount = 0;
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);
    fptr = fopen("line.txt", "w");
    fputs(line, fptr);
    fclose(fptr);
    fptr = fopen("line.txt", "r");
    int ch;
    while((ch = fgetc(fptr)) != EOF) {
        if(ch == ' ') spaceCount++;
    }
    fclose(fptr);
    printf("Number of spaces: %d\n", spaceCount);
    return 0;
}