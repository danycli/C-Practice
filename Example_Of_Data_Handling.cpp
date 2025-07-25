#include <stdio.h>

int main() {
    FILE *fp; 
    char data[100];

    fp = fopen("danial_file.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(fp, "Name: Danial\n");
    fprintf(fp, "Course: Computer Science\n");
    fprintf(fp, "Goal: To become a Pro C Programmer\n");

    fclose(fp);

    fp = fopen("danial_file.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("Reading data from file:\n\n");
    while (fgets(data, sizeof(data), fp) != NULL) {
        printf("%s", data);
    }

    fclose(fp);

    return 0;
}

