#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Structure to store bug information
typedef struct {
    int bug_id;
    char reporter_name[100];
    char bug_type[100];
    char description[200];
    int status; // 1=Open, 0=Resolved
    int priority; // 1=Low, 2=Medium, 3=High
    long long int password;
} Bug;

// Global variables
Bug bugs[100];  // Array to store up to 100 bugs
int bug_count = 0;  // Current number of bugs in system

// Function prototypes
void displayMenu();
void createBug();
void accessBug();
void listAllBugs();
void displayBugDetails(int index);
void markAsResolved(int index);
void changePriority(int index);
int findBugById(int bug_id);
void displayPriorityText(int priority);
void displayStatusText(int status);

int main() {
    printf("=================================================\n");
    printf("   WELCOME TO BYTE BUG TRACKING SYSTEM\n");
    printf("   A project by Danial Ahmed(136), Saad Khan(131) & Mudassir Khan(138)\n");
    printf("=================================================\n");

    int choice;
    
    while(1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                createBug();
                break;
            case 2:
                accessBug();
                break;
            case 3:
                listAllBugs();
                break;
            case 4:
                printf("\n=================================================\n");
                printf("Thank you for using BYTE BUG TRACKING SYSTEM!\n");
                printf("=================================================\n");
                exit(0);
            default:
                printf("\n   INVALID CHOICE! Please select 1-4.   \n");
        }
    }
    
    return 0;
}

void displayMenu() {
    printf("\n=================================================\n");
    printf("                MAIN MENU\n");
    printf("=================================================\n");
    printf("1. Create New Bug Report\n");
    printf("2. Access Existing Bug\n");
    printf("3. List All Bugs\n");
    printf("4. Exit System\n");
    printf("=================================================\n");
}

void createBug() {
    if(bug_count >= 100) {
        printf("\n   ERROR: Maximum bug limit reached!   \n");
        return;
    }
    
    printf("\n=================================================\n");
    printf("            CREATE NEW BUG REPORT\n");
    printf("=================================================\n");
    
    // Clear input buffer
    getchar();
    
    // Get bug details from user
    printf("Enter your name: ");
    fgets(bugs[bug_count].reporter_name, sizeof(bugs[bug_count].reporter_name), stdin);
    bugs[bug_count].reporter_name[strcspn(bugs[bug_count].reporter_name, "\n")] = 0; // Remove newline
    
    printf("Enter bug type (e.g., Syntax Error, Logic Error, Runtime Error): ");
    fgets(bugs[bug_count].bug_type, sizeof(bugs[bug_count].bug_type), stdin);
    bugs[bug_count].bug_type[strcspn(bugs[bug_count].bug_type, "\n")] = 0; // Remove newline
    
    printf("Enter bug description: ");
    fgets(bugs[bug_count].description, sizeof(bugs[bug_count].description), stdin);
    bugs[bug_count].description[strcspn(bugs[bug_count].description, "\n")] = 0; // Remove newline
    
    // Get priority
    printf("Enter priority (1=Low, 2=Medium, 3=High): ");
    scanf("%d", &bugs[bug_count].priority);
    while(bugs[bug_count].priority < 1 || bugs[bug_count].priority > 3) {
        printf("\n   INVALID PRIORITY!   \n");
        printf("Please enter 1, 2, or 3: ");
        scanf("%d", &bugs[bug_count].priority);
    }
    
    // Get password for this bug
    printf("Create a password for this bug (numbers only): ");
    scanf("%lld", &bugs[bug_count].password);
    
    // Set bug details
    bugs[bug_count].bug_id = bug_count + 1;  // Bug ID starts from 1
    bugs[bug_count].status = 1;  // New bugs are always open
    
    printf("\n=================================================\n");
    printf("BUG REPORT CREATED SUCCESSFULLY!\n");
    printf("Bug ID: %d\n", bugs[bug_count].bug_id);
    printf("Reporter: %s\n", bugs[bug_count].reporter_name);
    printf("Type: %s\n", bugs[bug_count].bug_type);
    printf("Description: %s\n", bugs[bug_count].description);
    printf("Priority: ");
    displayPriorityText(bugs[bug_count].priority);
    printf("Status: OPEN\n");
    printf("Password: %lld\n", bugs[bug_count].password);
    printf("\nPlease remember your Bug ID and Password for future access!\n");
    printf("=================================================\n");
    
    bug_count++;
}

void accessBug() {
    if(bug_count == 0) {
        printf("\n   NO BUGS IN SYSTEM!   \n");
        return;
    }
    
    int bug_id;
    printf("\nPlease enter Bug ID to access: ");
    scanf("%d", &bug_id);
    
    int index = findBugById(bug_id);
    if(index == -1) {
        printf("\n   BUG NOT FOUND!   \n");
        return;
    }
    
    // Password verification
    long long int entered_password;
    printf("Please enter password for Bug ID %d: ", bug_id);
    scanf("%lld", &entered_password);
    
    int attempts = 1;
    while(entered_password != bugs[index].password) {
        attempts++;
        if(attempts > 3) {
            printf("\n   ACCESS BLOCKED DUE TO MULTIPLE INCORRECT PASSWORD ATTEMPTS!   \n");
            return;
        }
        printf("\n   ACCESS DENIED - INCORRECT PASSWORD!   \n");
        printf("Please try again: ");
        scanf("%lld", &entered_password);
    }
    
    printf("\n=================================================\n");
    printf("ACCESS GRANTED\n");
    displayBugDetails(index);
    
    // Operations menu
    printf("Please select an operation:\n");
    printf("1. Mark as Resolved\n");
    printf("2. Change Priority\n");
    printf("3. Return to Main Menu\n");
    printf("Your choice: ");
    
    int operation;
    scanf("%d", &operation);
    while(operation < 1 || operation > 3) {
        printf("\n   INVALID OPERATION!   \n");
        printf("Please choose 1, 2, or 3: ");
        scanf("%d", &operation);
    }
    
    switch(operation) {
        case 1:
            markAsResolved(index);
            break;
        case 2:
            changePriority(index);
            break;
        case 3:
            return;
    }
}

void listAllBugs() {
    if(bug_count == 0) {
        printf("\n   NO BUGS IN SYSTEM!   \n");
        return;
    }
    
    printf("\n=================================================\n");
    printf("                ALL BUGS SUMMARY\n");
    printf("=================================================\n");
    printf("ID | Reporter       | Type           | Status    | Priority\n");
    printf("----|----------------|----------------|-----------|----------\n");
    
    for(int i = 0; i < bug_count; i++) {
        printf("%-3d| %-14s | %-14s | %-9s | ", 
               bugs[i].bug_id, 
               bugs[i].reporter_name, 
               bugs[i].bug_type,
               (bugs[i].status == 1) ? "OPEN" : "RESOLVED");
        
        if(bugs[i].priority == 1) printf("LOW\n");
        else if(bugs[i].priority == 2) printf("MEDIUM\n");
        else printf("HIGH\n");
    }
    printf("=================================================\n");
}

void displayBugDetails(int index) {
    printf("Bug ID: %d\n", bugs[index].bug_id);
    printf("Bug Reporter: %s\n", bugs[index].reporter_name);
    printf("Bug Type: %s\n", bugs[index].bug_type);
    printf("Description: %s\n", bugs[index].description);
    printf("Current Status: ");
    displayStatusText(bugs[index].status);
    printf("Priority: ");
    displayPriorityText(bugs[index].priority);
    printf("\n");
}

void markAsResolved(int index) {
    if(bugs[index].status == 0) {
        printf("\n   BUG ALREADY RESOLVED!   \n");
        printf("=================================================\n");
    } else {
        bugs[index].status = 0;
        printf("\n=================================================\n");
        printf("BUG MARKED AS RESOLVED\n");
        printf("Bug ID: %d\n", bugs[index].bug_id);
        printf("Status: RESOLVED\n");
        printf("=================================================\n");
    }
}

void changePriority(int index) {
    printf("\nEnter new priority (1=Low, 2=Medium, 3=High): ");
    int new_priority;
    scanf("%d", &new_priority);
    while(new_priority < 1 || new_priority > 3) {
        printf("\n   INVALID PRIORITY!   \n");
        printf("Please enter 1, 2, or 3: ");
        scanf("%d", &new_priority);
    }
    
    bugs[index].priority = new_priority;
    printf("\n=================================================\n");
    printf("PRIORITY CHANGED SUCCESSFULLY\n");
    printf("Bug ID: %d\n", bugs[index].bug_id);
    printf("New Priority: ");
    displayPriorityText(new_priority);
    printf("=================================================\n");
}

int findBugById(int bug_id) {
    for(int i = 0; i < bug_count; i++) {
        if(bugs[i].bug_id == bug_id) {
            return i;
        }
    }
    return -1; // Bug not found
}

void displayPriorityText(int priority) {
    if(priority == 1) {
        printf("LOW\n");
    } else if(priority == 2) {
        printf("MEDIUM\n");
    } else {
        printf("HIGH\n");
    }
}

void displayStatusText(int status) {
    if(status == 1) {
        printf("OPEN\n");
    } else {
        printf("RESOLVED\n");
    }
}
