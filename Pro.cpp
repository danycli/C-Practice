#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Include stdlib.h for atoi function
#include <math.h>

#define MAX_CARS 100
#define MAX_NAME_LENGTH 50
#define FILE_NAME "cars.txt"

typedef struct {
    char name[MAX_NAME_LENGTH];
    int model;
    int year;
    char color[20];
    float price;
} Car;

Car inventory[MAX_CARS];
int numCars = 0;

// Function prototypes
void displayMainMenu();
void displayManagementMenu();
void displayUserMenu();
void displayCars();
void addCar();
void searchCar();
void sellCar();
void showroomCapacity();
void discountOffers();
void showroomdata();
void calculateLoanPayment();
void saveToFile();
void loadFromFile();

int main() {
    int choice;
    
    loadFromFile(); // Load existing data from file at the beginning

    printf("\n******************************************************************\n");
    printf("\n\t\t***** TARU CAR SHOWROOM *****\n");

    do {
        printf("******************************************************************\n");
        displayMainMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline left in input buffer

        switch (choice) {
            case 1:
                displayManagementMenu();
                break;
            case 2:
                displayUserMenu();
                break;
            case 0:
                printf("Saving data and exiting...\n");
                saveToFile(); // Save data to file before exiting
                break;
            default:
                printf("Invalid Choice! Please enter a number between 0 and 2.\n");
        }
    } while (choice != 0);

    return 0;
}

void saveToFile() {
    FILE *fp = fopen(FILE_NAME, "w"); // Open file in write mode (overwrite)

    if (fp == NULL) {
        perror("Error opening file for writing");
        return;
    }

    for (int i = 0; i < numCars; ++i) {
        fprintf(fp, "%s;%d;%d;%s;%.2f\n", inventory[i].name, inventory[i].model,
                inventory[i].year, inventory[i].color, inventory[i].price);
    }

    fclose(fp);
}

void loadFromFile() {
    FILE *fp = fopen(FILE_NAME, "r");

    if (fp == NULL) {
        perror("Error opening file for reading");
        return;
    }

    char line[256]; // Assuming maximum line length
    while (fgets(line, sizeof(line), fp)) {
        if (numCars >= MAX_CARS) {
            printf("Maximum capacity reached. Cannot load more cars from file.\n");
            break;
        }

        char *token;
        token = strtok(line, ";");
        if (token == NULL) continue; // Skip empty lines

        strcpy(inventory[numCars].name, token);
        token = strtok(NULL, ";");
        if (token == NULL) continue;

        inventory[numCars].model = atoi(token);
        token = strtok(NULL, ";");
        if (token == NULL) continue;

        inventory[numCars].year = atoi(token);
        token = strtok(NULL, ";");
        if (token == NULL) continue;

        strcpy(inventory[numCars].color, token);
        token = strtok(NULL, ";");
        if (token == NULL) continue;

        inventory[numCars].price = atof(token);

        numCars++;
    }

    fclose(fp);
}

void displayMainMenu() {
    printf("\n\n\t\t   ***** MAIN MENU *****\n");
    printf("\n******************************************************************\n");
    printf("\n\t1. Management\n");
    printf("\t2. Customer\n");
    printf("\t0. Exit\n");
    printf("\n******************************************************************\n");
}

void displayManagementMenu() {
    int choice;

    do {
        printf("\n******************************************************************\n");
        printf("\n\t\t***** MANAGEMENT MENU *****\n");
        printf("\n******************************************************************\n");
        printf("\n\t1. Display Cars\n");
        printf("\t2. Add New Car\n");
        printf("\t3. Search Car\n");
        printf("\t4. Sell Car\n");
        printf("\t5. Showroom Capacity\n");
        printf("\t6. Discount Offers\n");
        printf("\t0. Back to Main Menu\n");

        printf("\n******************************************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline left in input buffer

        switch (choice) {
            case 1:
                displayCars();
                break;
            case 2:
                addCar();
                break;
            case 3:
                searchCar();
                break;
            case 4:
                sellCar();
                break;
            case 5:
                showroomCapacity();
                break;
            case 6:
                discountOffers();
                break;
            case 0:
                break;
            default:
                printf("Invalid Choice! Please enter a number between 0 and 6.\n");
        }
    } while (choice != 0);
}

void displayUserMenu() {
    int choice;

    do {
        printf("\n******************************************************************\n");
        printf("\n\t\t***** CUSTOMER MENU *****\n");
        printf("\n******************************************************************\n");
        printf("\n\t1. Display Cars\n");
        printf("\t2. Search Car\n");
        printf("\t3. Contact Info\n");
        printf("\t4. Loan Payment\n");
        printf("\t0. Back to Main Menu\n");
        printf("\n******************************************************************\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline left in input buffer

        switch (choice) {
            case 1:
                displayCars();
                break;
            case 2:
                searchCar();
                break;
            case 3:
                showroomdata();
                break;
            case 4:
                calculateLoanPayment();
                break;
            case 0:
                break;
            default:
                printf("Invalid Choice! Please enter a number between 0 and 4.\n");
        }
    } while (choice != 0);
}

void displayCars() {
    if (numCars == 0) {
        printf("\n\tNo cars in Showroom.\n");
        return;
    }

    printf("\nList of Cars in Showroom:\n");
    printf("-----------------------------------------------------------------------\n");
    printf("ID   Name           Model No       Color         Year       Price\n");
    printf("-----------------------------------------------------------------------\n");

    for (int i = 0; i < numCars; ++i) {
        printf("%-5d%-15s%-15d%-14s%-10d%.2f\n", i + 1, inventory[i].name,
               inventory[i].model, inventory[i].color, inventory[i].year, inventory[i].price);
    }
    printf("-----------------------------------------------------------------------\n");
}

void addCar() {
    if (numCars == MAX_CARS) {
        printf("Cannot Add more Cars. Showroom is full.\n");
        return;
    }

    Car newCar;
    printf("\nEnter details of the new car:\n\n");
    printf("Car Name: ");
    fgets(newCar.name, MAX_NAME_LENGTH, stdin);
    newCar.name[strcspn(newCar.name, "\n")] = '\0'; // Remove newline character
    printf("Model No: ");
    char modelStr[20];
    fgets(modelStr, sizeof(modelStr), stdin);
    sscanf(modelStr, "%d", &newCar.model);
    printf("Year: ");
    char yearStr[20];
    fgets(yearStr, sizeof(yearStr), stdin);
    sscanf(yearStr, "%d", &newCar.year);
    printf("Color: ");
    fgets(newCar.color, 20, stdin);
    newCar.color[strcspn(newCar.color, "\n")] = '\0'; // Remove newline character
    printf("Price: ");
    char priceStr[20];
    fgets(priceStr, sizeof(priceStr), stdin);
    sscanf(priceStr, "%f", &newCar.price);

    inventory[numCars++] = newCar;
    printf("Car added successfully.\n");
}

void searchCar() {
    char name[MAX_NAME_LENGTH];
    char color[20];
    printf("\nEnter car Name : ");
    fgets(name, MAX_NAME_LENGTH, stdin);
    name[strcspn(name, "\n")] = '\0'; // Remove newline character
    printf("Enter car color : ");
    fgets(color, 20, stdin);
    color[strcspn(color, "\n")] = '\0'; // Remove newline character

    for (int i = 0; i < numCars; i++) {
        if (strcasecmp(inventory[i].name, name) == 0 && strcasecmp(inventory[i].color, color) == 0) {
            printf("******************************************************************\n");
            printf("\nCar ID No is: %d.\n", i + 1);
            printf("\n\t**Details**\n");
            printf("\n\tName: %s\n", inventory[i].name);
            printf("\tModel No: %d\n", inventory[i].model);
            printf("\tYear: %d\n", inventory[i].year);
            printf("\tColor: %s\n", inventory[i].color);
            printf("\tPrice: %.2f\n", inventory[i].price);
            return;
        }
    }
    printf("Car not found.\n");
}

void sellCar() {
    int index;
    printf("\nEnter ID No of the car to sell: ");
    scanf("%d", &index);
    getchar(); // Consume newline left in input buffer

    if (index < 1 || index > numCars) {
        printf("Invalid ID No.\n");
        return;
    }

    printf("\nCar %s (Model No: %d) sold successfully for $%.2f.\n", inventory[index - 1].name,
           inventory[index - 1].model, inventory[index - 1].price);

    for (int i = index - 1; i < numCars - 1; i++) {
        inventory[i] = inventory[i + 1];
    }
    numCars--;
}

void showroomCapacity() {
    printf("\n******************************************************************\n");
    printf("\n\t\t***Showroom Capacity***\n");
    printf("\n\tMaximum capacity: %d\n", MAX_CARS);
    printf("\tCurrent number of Cars: %d\n", numCars);
    printf("\tEmpty Space Available: %d\n", MAX_CARS - numCars);
}

void discountOffers() {
    if (numCars == 0) {
        printf("No cars available for discount offers.\n");
        return;
    }

    printf("Discount Offers:\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("ID   Name          Model No        Year    Original Price   Discounted Price\n");
    printf("--------------------------------------------------------------------------------\n");

    for (int i = 0; i < numCars; ++i) {
        float discountedPrice = inventory[i].price * 0.9; // 10% discount
        printf("%-5d%-15s%-15d%-7d%.2f            %.2f\n", i + 1, inventory[i].name,
               inventory[i].model, inventory[i].year, inventory[i].price, discountedPrice);
    }
    printf("--------------------------------------------------------------------------------\n");
}

void showroomdata() {
    printf("\n\t****Manager****\n\n\tName:\n\tNasrullah\n\tPhone No:\n\t0313-9899313\n");
    printf("\n\t****Assistant Manager****\n\n\tName:\n\tMuhammad Hasham\n\tPhone No:\n\t0318-2134637\n");
    return;
}

void calculateLoanPayment() {
    float loanAmount;
    int years;

    printf("\nEnter Car Price: ");
    char priceStr[20];
    fgets(priceStr, sizeof(priceStr), stdin);
    sscanf(priceStr, "%f", &loanAmount);

    printf("Enter Loan Term (years): ");
    char yearStr[20];
    fgets(yearStr, sizeof(yearStr), stdin);
    sscanf(yearStr, "%d", &years);

    float annualRate = 16.0;
    float monthlyRate = annualRate / 12 / 100;
    int months = years * 12;
    float monthlyPayment = (loanAmount * monthlyRate) / (1 - pow(1 + monthlyRate, -months));
    float totalPayback = monthlyPayment * months;

    printf("\n\tLoan Payment Details:\n");
    printf("\n\tMonthly Loan Payment at 16%% annual interest rate: $%.2f\n", monthlyPayment);
    printf("\tTotal Amount Paid Back over %d years: $%.2f\n", years, totalPayback);
}

