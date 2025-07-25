#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("students.txt","a");
    char name[50];
    int roll;
    float marks;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter roll number: ");
    scanf("%d", &roll);
    printf("Enter marks: ");
    scanf("%f", &marks);

    fprintf(fptr, "Student Name = %s", name);
    fprintf(fptr, "Roll Number = %d\n", roll);
    fprintf(fptr, "Marks = %.2f\n\n", marks);

    fclose(fptr);
}