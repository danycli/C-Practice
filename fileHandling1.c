#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("text1.txt","a+");
    if(fptr == NULL){
        printf("File not found Ass hole");
    }else{
    fprintf(fptr,"I am a man of fortune and I must seek my fortune.....\n");
    fprintf(fptr,"If its artificial it is not gonna be intelligence and if it is intelligence it is not gonna be artificial.....");
    rewind(fptr);
    char strings [200];
    while(fgets(strings,200,fptr)){
    printf("%s",strings);
    }
    fclose (fptr);
}
return 0;
}