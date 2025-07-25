#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ITEMS 100
#define MAX_STRING_SIZE 1000

// Declaration of structure of grocery
struct grocery {
    char item_name[MAX_STRING_SIZE];
    char company[MAX_STRING_SIZE];
    float price;
    char item_description[MAX_STRING_SIZE];
};

// Declaration of structure of employee
struct employees {
    int id;
    char employee_name[MAX_STRING_SIZE];
    char father_name[MAX_STRING_SIZE];
    char date_of_join[MAX_STRING_SIZE];
    float pay;
};

// Declaration of structure for bill
struct bill {
    char customer_name[MAX_STRING_SIZE];
    char item_names[MAX_ITEMS][MAX_STRING_SIZE];
    float quantities[MAX_ITEMS];
    float item_price[MAX_ITEMS];
    int item_count;
    float total;
};

// Function declarations
void main_menu(struct grocery g1[], struct employees e1[], struct bill *b1, int *grocery_size, int *employee_size);
void grocery_menu(struct grocery g1[], int *grocery_size);
void employee_menu(struct employees e1[], int *size);
void billing_menu(struct bill *b1);
void enter_grocery_data(struct grocery g1[], int *grocery_size);
void print_grocery_data(struct grocery g1[], int grocery_size);
void edit_grocery_data(struct grocery g1[], int grocery_size);
void calculate_total_grocery(struct grocery g1[], int grocery_size);
void enter_employee_data(struct employees e1[], int *employee_size);
void print_employee_data(struct employees e1[], int employee_size);
void edit_employee_data(struct employees e1[], int employee_size);
void create_bill(struct bill *b1);
void print_bill(struct bill *b1);
void save_grocery_data(struct grocery g1[], int grocery_size);
void load_grocery_data(struct grocery g1[], int *grocery_size);
void save_employee_data(struct employees e1[], int employee_size);
void load_employee_data(struct employees e1[], int *employee_size);
void save_bill_data(struct bill *b1);
void load_bill_data(struct bill *b1);

// Main menu
void main_menu(struct grocery g1[], struct employees e1[], struct bill *b1, int *grocery_size, int *employee_size) {
    int choice;
    while (1) {
        printf("\n==============================\n");
        printf("Grocery Store Management System\n");
        printf("==============================\n");
        printf("1. Grocery Management\n");
        printf("2. Employee Management\n");
        printf("3. Billing System\n");
        printf("4. Exit\n");
        printf("==============================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                grocery_menu(g1, grocery_size);
                break;
            case 2:
                employee_menu(e1, employee_size);
                break;
            case 3:
                billing_menu(b1);
                break;
            case 4:
                printf("Exiting the system. Thank you!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

// Grocery menu
void grocery_menu(struct grocery g1[], int *grocery_size) {
    int choice;
    while (1) {
        printf("\n==============================\n");
        printf("Grocery Management Menu\n");
        printf("==============================\n");
        printf("1. Enter Grocery Data\n");
        printf("2. Print Grocery Data\n");
        printf("3. Edit Grocery Data\n");
        printf("4. Calculate Total Expenses\n");
        printf("5. Save Grocery Data\n");
        printf("6. Return to Main Menu\n");
        printf("==============================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                enter_grocery_data(g1, grocery_size);
                break;
            case 2:
                print_grocery_data(g1, *grocery_size);
                break;
            case 3:
                edit_grocery_data(g1, *grocery_size);
                break;
            case 4:
                calculate_total_grocery(g1, *grocery_size);
                break;
            case 5:
                save_grocery_data(g1, *grocery_size);
                break;
            case 6:
                return;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

// Employee menu
void employee_menu(struct employees e1[], int *employee_size) {
    int choice;
    while (1) {
        printf("\n==============================\n");
        printf("Employee Management Menu\n");
        printf("==============================\n");
        printf("1. Enter Employee Data\n");
        printf("2. Print Employee Data\n");
        printf("3. Edit Employee Data\n");
        printf("4. Save Employee Data\n");
        printf("5. Return to Main Menu\n");
        printf("==============================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                enter_employee_data(e1, employee_size);
                break;
            case 2:
                print_employee_data(e1, *employee_size);
                break;
            case 3:
                edit_employee_data(e1, *employee_size);
                break;
            case 4:
                save_employee_data(e1, *employee_size);
                break;
            case 5:
                return;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

// Billing menu
void billing_menu(struct bill *b1) {
    int choice;
    while (1) {
        printf("\n==============================\n");
        printf("Billing System Menu\n");
        printf("==============================\n");
        printf("1. Create Bill\n");
        printf("2. Print Bill\n");
        printf("3. Save Bill\n");
        printf("4. Return to Main Menu\n");
        printf("==============================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                create_bill(b1);
                break;
            case 2:
                print_bill(b1);
                break;
            case 3:
                save_bill_data(b1);
                break;
            case 4:
                return;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

// Function to enter grocery data
void enter_grocery_data(struct grocery g1[], int *grocery_size) {
    printf("How many items do you want to add? ");
    scanf("%d", grocery_size);
    for (int i = 0; i < *grocery_size; i++) {
        printf("Enter details for item %d:\n", i + 1);
        printf("Item Name: ");
        scanf("%s", g1[i].item_name);
        printf("Company: ");
        scanf("%s", g1[i].company);
        printf("Price: ");
        scanf("%f", &g1[i].price);
        printf("Description: ");
        scanf("%s", g1[i].item_description);
    }
}

// Function to print grocery data
void print_grocery_data(struct grocery g1[], int grocery_size) {
    printf("\nGrocery List:\n");
    for (int i = 0; i < grocery_size; i++) {
        printf("Item %d:\n", i + 1);
        printf("Name: %s\n", g1[i].item_name);
        printf("Company: %s\n", g1[i].company);
        printf("Price: %.2f\n", g1[i].price);
        printf("Description: %s\n", g1[i].item_description);
    }
}

// Function to edit grocery data
void edit_grocery_data(struct grocery g1[], int grocery_size) {
    int index;
    printf("Enter the item number to edit (1-%d): ", grocery_size);
    scanf("%d", &index);
    if (index < 1 || index > grocery_size) {
        printf("Invalid item number.\n");
        return;
    }
    index--;
    printf("Editing details for item %d:\n", index + 1);
    printf("Item Name: ");
    scanf("%s", g1[index].item_name);
    printf("Company: ");
    scanf("%s", g1[index].company);
    printf("Price: ");
    scanf("%f", &g1[index].price);
    printf("Description: ");
    scanf("%s", g1[index].item_description);
}

// Function to calculate total grocery expenses
void calculate_total_grocery(struct grocery g1[], int grocery_size) {
    float total = 0;
    for (int i = 0; i < grocery_size; i++) {
        total += g1[i].price;
    }
    printf("Total Grocery Expenses: %.2f\n", total);
}

// Function to enter employee data
void enter_employee_data(struct employees e1[], int *employee_size) {
    printf("How many employees do you want to add? ");
    scanf("%d", employee_size);
    for (int i = 0; i < *employee_size; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &e1[i].id);
        printf("Name: ");
        scanf("%s", e1[i].employee_name);
        printf("Father's Name: ");
        scanf("%s", e1[i].father_name);
        printf("Date of Joining: ");
        scanf("%s", e1[i].date_of_join);
        printf("Pay: ");
        scanf("%f", &e1[i].pay);
    }
}

// Function to print employee data
void print_employee_data(struct employees e1[], int employee_size) {
    printf("\nEmployee List:\n");
    for (int i = 0; i < employee_size; i++) {
        printf("Employee %d:\n", i + 1);
        printf("ID: %d\n", e1[i].id);
        printf("Name: %s\n", e1[i].employee_name);
        printf("Father's Name: %s\n", e1[i].father_name);
        printf("Date of Joining: %s\n", e1[i].date_of_join);
        printf("Pay: %.2f\n", e1[i].pay);
    }
}

// Function to edit employee data
void edit_employee_data(struct employees e1[], int employee_size) {
    int index;
    printf("Enter the employee number to edit (1-%d): ", employee_size);
    scanf("%d", &index);
    if (index < 1 || index > employee_size) {
        printf("Invalid employee number.\n");
        return;
    }
    index--;
    printf("Editing details for employee %d:\n", index + 1);
    printf("Employee ID: ");
    scanf("%d", &e1[index].id);
    printf("Name: ");
    scanf("%s", e1[index].employee_name);
    printf("Father's Name: ");
    scanf("%s", e1[index].father_name);
    printf("Date of Joining: ");
    scanf("%s", e1[index].date_of_join);
    printf("Pay: ");
    scanf("%f", &e1[index].pay);
}

// Function to create a bill
void create_bill(struct bill *b1) {
    printf("Enter customer name: ");
    scanf("%s", b1->customer_name);
    printf("How many items in the bill? ");
    scanf("%d", &b1->item_count);
    b1->total = 0;
    for (int i = 0; i < b1->item_count; i++) {
        printf("Enter details for item %d:\n", i + 1);
        printf("Item Name: ");
        scanf("%s", b1->item_names[i]);
        printf("Quantity: ");
        scanf("%f", &b1->quantities[i]);
        printf("Price: ");
        scanf("%f", &b1->item_price[i]);
        b1->total += b1->quantities[i] * b1->item_price[i];
    }
}

// Function to print a bill
void print_bill(struct bill *b1) {
    printf("\nCustomer Name: %s\n", b1->customer_name);
    printf("Bill Details:\n");
    printf("============================\n");
    for (int i = 0; i < b1->item_count; i++) {
        printf("Item: %s, Quantity: %.2f, Price: %.2f\n", b1->item_names[i], b1->quantities[i], b1->item_price[i]);
    }
    printf("============================\n");
    printf("Total: %.2f\n", b1->total);
}

// Function to save grocery data
void save_grocery_data(struct grocery g1[], int grocery_size) {
    FILE *file = fopen("grocery_data.txt", "w");
    if (file == NULL) {
        printf("Unable to open file for saving data.\n");
        return;
    }
    for (int i = 0; i < grocery_size; i++) {
        fprintf(file, "%s %s %.2f %s\n", g1[i].item_name, g1[i].company, g1[i].price, g1[i].item_description);
    }
    fclose(file);
    printf("Grocery data saved successfully.\n");
}

// Function to load grocery data
void load_grocery_data(struct grocery g1[], int *grocery_size) {
    FILE *file = fopen("grocery_data.txt", "r");
    if (file == NULL) {
        printf("Unable to open file for loading data.\n");
        return;
    }
    while (fscanf(file, "%s %s %f %s", g1[*grocery_size].item_name, g1[*grocery_size].company,
                  &g1[*grocery_size].price, g1[*grocery_size].item_description) != EOF) {
        (*grocery_size)++;
    }
    fclose(file);
    printf("Grocery data loaded successfully.\n");
}

// Function to save employee data
void save_employee_data(struct employees e1[], int employee_size) {
    FILE *file = fopen("employee_data.txt", "w");
    if (file == NULL) {
        printf("Unable to open file for saving data.\n");
        return;
    }
    for (int i = 0; i < employee_size; i++) {
        fprintf(file, "%d %s %s %s %.2f\n", e1[i].id, e1[i].employee_name, e1[i].father_name, e1[i].date_of_join, e1[i].pay);
    }
    fclose(file);
    printf("Employee data saved successfully.\n");
}

// Function to load employee data
void load_employee_data(struct employees e1[], int *employee_size) {
    FILE *file = fopen("employee_data.txt", "r");
    if (file == NULL) {
        printf("Unable to open file for loading data.\n");
        return;
    }
    while (fscanf(file, "%d %s %s %s %f", &e1[*employee_size].id, e1[*employee_size].employee_name,
                  e1[*employee_size].father_name, e1[*employee_size].date_of_join,
                  &e1[*employee_size].pay) != EOF) {
        (*employee_size)++;
    }
    fclose(file);
    printf("Employee data loaded successfully.\n");
}

// Function to save bill data
void save_bill_data(struct bill *b1) {
    FILE *file = fopen("bill_data.txt", "w");
    if (file == NULL) {
        printf("Unable to open file for saving data.\n");
        return;
    }
    fprintf(file, "%s\n", b1->customer_name);
    fprintf(file, "%d\n", b1->item_count);
    for (int i = 0; i < b1->item_count; i++) {
        fprintf(file, "%s %.2f %.2f\n", b1->item_names[i], b1->quantities[i], b1->item_price[i]);
    }
    fprintf(file, "Total: %.2f\n", b1->total);
    fclose(file);
    printf("Bill data saved successfully.\n");
}

// Function to load bill data
void load_bill_data(struct bill *b1) {
    FILE *file = fopen("bill_data.txt", "r");
    if (file == NULL) {
        printf("Unable to open file for loading data.\n");
        return;
    }
    fscanf(file, "%s", b1->customer_name);
    fscanf(file, "%d", &b1->item_count);
    b1->total = 0;
    for (int i = 0; i < b1->item_count; i++) {
        fscanf(file, "%s %f %f", b1->item_names[i], &b1->quantities[i], &b1->item_price[i]);
        b1->total += b1->quantities[i] * b1->item_price[i];
    }
    fclose(file);
    printf("Bill data loaded successfully.\n");
}

// Main function
int main(void) {
    struct grocery g1[MAX_ITEMS];
    struct employees e1[MAX_ITEMS];
    struct bill b1;
    int grocery_size = 0, employee_size = 0;
    load_grocery_data(g1, &grocery_size);
    load_employee_data(e1, &employee_size);
    load_bill_data(&b1);
    main_menu(g1, e1, &b1, &grocery_size, &employee_size);
    return 0;
}
