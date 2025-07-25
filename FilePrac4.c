#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("sum.txt","r");
    int a;
    fscanf(fptr,"%d",&a);
    int b;
    fscanf(fptr,"%d",&b);
    int sum = a + b;
    fclose(fptr);
    fptr = fopen("sum.txt","w");
    fprintf(fptr, "%d", sum);
    fclose(fptr);
}