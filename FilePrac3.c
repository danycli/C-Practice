#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("odd.txt","w");
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            fprintf(fptr, "%d\n", i);
        }
    }
}