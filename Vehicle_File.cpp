#include <stdio.h>
#include <string.h>

struct Danial_Showroom {
    char owner[30];
    char regNo[20];
    char company[20];
    char model[20];
    int makeYear;
    int engineCC;
    long int price;
};

int main() {
    struct Danial_Showroom vehicles[10];
    char searchReg[20];
    int found = 0;

    printf("\n--- Enter Record for 10 Vehicles ---\n");
    for (int i = 0; i < 10; i++) {
        printf("\nVehicle %d:\n", i + 1);

        printf("Owner Name: ");
        scanf(" %[^\n]", vehicles[i].owner);

        printf("Registration No: ");
        scanf(" %[^\n]", vehicles[i].regNo);

        printf("Company: ");
        scanf(" %[^\n]", vehicles[i].company);

        printf("Model: ");
        scanf(" %[^\n]", vehicles[i].model);

        printf("Make Year: ");
        scanf("%d", &vehicles[i].makeYear);

        printf("Engine Capacity (in cc): ");
        scanf("%d", &vehicles[i].engineCC);

        printf("Price: ");
        scanf("%ld", &vehicles[i].price);
    }

    printf("\n\n--- Displaying All Vehicle Records ---\n");
    for (int i = 0; i < 10; i++) {
        printf("\nVehicle %d:\n", i + 1);
        printf("Owner: %s\n", vehicles[i].owner);
        printf("Reg No: %s\n", vehicles[i].regNo);
        printf("Company: %s\n", vehicles[i].company);
        printf("Model: %s\n", vehicles[i].model);
        printf("Make Year: %d\n", vehicles[i].makeYear);
        printf("Engine CC: %d\n", vehicles[i].engineCC);
        printf("Price: %ld\n", vehicles[i].price);
    }

    printf("\n\nEnter Registration No to Search: ");
    scanf(" %[^\n]", searchReg);

    for (int i = 0; i < 10; i++) {
        if (strcmp(vehicles[i].regNo, searchReg) == 0) {
            printf("\n--- Vehicle Found ---\n");
            printf("Owner: %s\n", vehicles[i].owner);
            printf("Reg No: %s\n", vehicles[i].regNo);
            printf("Company: %s\n", vehicles[i].company);
            printf("Model: %s\n", vehicles[i].model);
            printf("Make Year: %d\n", vehicles[i].makeYear);
            printf("Engine CC: %d\n", vehicles[i].engineCC);
            printf("Price: %ld\n", vehicles[i].price);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nVehicle with Registration No '%s' not found.\n", searchReg);
    }

    return 0;
}

