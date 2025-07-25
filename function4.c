#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int vowels=0;
    fgets(a,sizeof(a),stdin);
    // printf("%s",a);
    for (int i = 0; a[i] != '\0'; i++){
        char ch=a[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            vowels++;
            printf("Vowel found = %c\n",ch);
        }
    }
    printf("Number of vowels %d",vowels);
}