#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Vovels.txt", "w");
    char ch[100000];
    printf("Enter a sentence :");
    fgets(ch, sizeof(ch), stdin);
    fprintf(fptr, "%s", ch);
    fclose(fptr);
    fptr = fopen("Vovels.txt", "r");
    int count = 0;
    char c;
    while((c = fgetc(fptr)) != EOF){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            count++;
        }
    }
    printf("Number of vowels in the file: %d\n", count);
    fclose(fptr);
}