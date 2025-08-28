#include<stdio.h>
#include<string.h>
int main()
{
    char s [2][10] = {"flower","flew"};
    char c [10];
    strcpy (c,s[0]);

    for(int i = 0; i<2; i++){
        int j = 0;
        while(s[i][j] != '\0' && c[j] != '\0' && c[j] == s[i][j]){
            j++;
        }
        c[j] = '\0';
    }
    printf("%s",c);
return 0;
}