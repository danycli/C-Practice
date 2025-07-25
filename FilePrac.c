#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("integer.txt","r");

    int n;
    while(fscanf(fptr,"%d",&n) != EOF){
        printf("%d\n",n);
    }
    fclose(fptr);
}