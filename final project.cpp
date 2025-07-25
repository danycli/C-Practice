#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_ROOMS 200
#define ROOM_CAPACITY 2

typedef struct {
    int registrationNumber;
    char name[50];
    char contact[15];
    int roomNumber;
} Student;

typedef struct {
    int roomNumber;
    int capacity;
    int currentOccupancy;
} Room;

Student students[MAX_STUDENTS];
Room rooms[MAX_ROOMS];
int studentCount = 0;

// Function prototypes
void manageStudents();
void manageRooms();

void addStudent();
void displayStudentDetails();
void removeStudent();
int findStudentIndex(int registrationNumber, char* name);
void searchStudent();
void changeStudentRoom();

void initializeRooms();
void displayRoomDetails();
void displaySpecificRoomDetails(int roomNumber);

int main() {
    int choice;
    printf("\n--------------------------------------------------------------\n");
    printf("\n\t\t**** Khan Crew Hostel ****\n");
    initializeRooms();
    
    do {
    	printf("\n--------------------------------------------------------------\n");
        printf("\t\t***Hostel Management System***\n");
        printf("--------------------------------------------------------------\n");
        printf("\n\t1. Manage Students\n");
        printf("\t2. Manage Rooms\n");
        printf("\t0. Exit\n");
        printf("\n--------------------------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                manageStudents();
                break;
            case 2:
                manageRooms();
                break;
            case 0:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice! Please Enter Choice Between 0 And 2.\n");
        }
    } while (choice != 0);
    
    return 0;
}

void manageStudents() {
    int choice;
    while (1) {
    	printf("--------------------------------------------------------------\n");
        printf("\t\t**Student Management**\n");
        printf("--------------------------------------------------------------\n");
        printf("\n\t1. Add Student\n");
        printf("\t2. Display Student Details\n");
        printf("\t3. Remove Student\n");
        printf("\t4. Search Student\n");
        printf("\t0. Back to Main Menu\n");
        printf("\n--------------------------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudentDetails();
                break;
            case 3:
                removeStudent();
                break;
            case 4:
                searchStudent();
                break;
            case 0:
                return;
            default:
                printf("Invalid choice! Please Enter Choice Between 0 And 4.\n");
        }
    }
}

void manageRooms() {
    int choice;
    while (1) {
    	printf("\n--------------------------------------------------------------\n");
        printf("\t\t**Room Management**\n");
        printf("--------------------------------------------------------------\n");
        printf("\t1. Display Room Details\n");
        printf("\t2. Change Student Room\n");
        printf("\t0. Back to Main Menu\n");
        printf("--------------------------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayRoomDetails();
                break;
            case 2:
                changeStudentRoom();
                break;
            case 0:
                return;
            default:
                printf("Invalid choice! Please Enter Choice Between 0 And 2.\n");
        }
    }
}

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Cannot Add More Students. Maximum Capacity Reached.\n");
        return;
    }
    Student s;
    printf("\nEnter Student Name: ");
    scanf("%s", &s.name);
    printf("Enter Student Reg No: \n");
    scanf("%d", &s.registrationNumber);
    printf("Enter Student Contact (11 Digits): \n");
    scanf("%s", &s.contact);
    printf("Enter room number (1-%d): \n", MAX_ROOMS);
    scanf("%d", &s.roomNumber);
    
    if (s.roomNumber < 1 || s.roomNumber > MAX_ROOMS) {
        printf("Invalid Room Number. Please Try Again.\n");
        return;
    }
    
    int roomIndex = s.roomNumber - 1;
    if (rooms[roomIndex].currentOccupancy < rooms[roomIndex].capacity) {
        rooms[roomIndex].currentOccupancy++;
        students[studentCount++] = s;
        printf("Student Added Successfully.\n");
    } else {
        printf("Room is Full. Cannot Add Student.\n");
    }
}

void displayStudentDetails() {
    if (studentCount == 0) {
        printf("No Students To Display.\n");
        return;
    }
    printf("\n---------------------------------------------------------------\n");
    printf("\t\tStudent Details:\n\n");
    for (int i = 0; i < studentCount; i++) {
        printf("\nRoom No: %d, Reg No: %d, Name: %s, Contact: %s\n", students[i].roomNumber, students[i].registrationNumber, students[i].name, students[i].contact);
    }
}

void removeStudent() {
    if (studentCount == 0) {
        printf("No students to remove.\n");
        return;
    }
    int registrationNumber;
    char name[50];
    printf("Enter Student Name: ");
    scanf("%s", name);
    printf("Enter Student Reg No: ");
    scanf("%d", &registrationNumber);
    
    int index = findStudentIndex(registrationNumber, name);
    if (index != -1) {
        int roomIndex = students[index].roomNumber - 1;
        rooms[roomIndex].currentOccupancy--;
        
        for (int i = index; i < studentCount - 1; i++) {
            students[i] = students[i + 1];
        }
        studentCount--;
        printf("Student Removed Successfully.\n");
    } else {
        printf("Student Not Found.\n");
    }
}

int findStudentIndex(int registrationNumber, char* name) {
    for (int i = 0; i < studentCount; i++) {
        if (students[i].registrationNumber == registrationNumber && strcmp(students[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

void searchStudent() {
    if (studentCount == 0) {
        printf("No students to search.\n");
        return;
    }
    int registrationNumber;
    char name[50];
    printf("Enter Student Name: ");
    scanf("%s", name);
    printf("Enter Student Reg No: ");
    scanf("%d", &registrationNumber);

    printf("\n--------------------------------------------------------------\n");
    printf("\t\tSearch Results:\n");
    for (int i = 0; i < studentCount; i++) {
        if (students[i].registrationNumber == registrationNumber && strcmp(students[i].name, name) == 0) { 	
            printf("\nRoom No: %d, Reg No: %d, Name: %s, Contact: %s\n", students[i].roomNumber, students[i].registrationNumber, students[i].name, students[i].contact);
        } else {
            printf("Student Not Found!\n");
        }
    }
}

void changeStudentRoom() {
    if (studentCount == 0) {
        printf("No students to change rooms.\n");
        return;
    }
    int registrationNumber;
    char name[50];
    int newRoomNumber;
    
    printf("Enter Student Name: ");
    scanf("%s", name);
    printf("Enter Student Reg No: ");
    scanf("%d", &registrationNumber);
    printf("Enter new room number (1-%d): ", MAX_ROOMS);
    scanf("%d", &newRoomNumber);
    
    if (newRoomNumber < 1 || newRoomNumber > MAX_ROOMS) {
        printf("Invalid room number. Please try again.\n");
        return;
    }
    
    int studentIndex = findStudentIndex(registrationNumber, name);
    if (studentIndex != -1) {
        int currentRoomIndex = students[studentIndex].roomNumber - 1;
        int newRoomIndex = newRoomNumber - 1;
        
        if (rooms[newRoomIndex].currentOccupancy < rooms[newRoomIndex].capacity) {
            rooms[currentRoomIndex].currentOccupancy--;
            rooms[newRoomIndex].currentOccupancy++;
            students[studentIndex].roomNumber = newRoomNumber;
            printf("Student room changed successfully.\n");
        } else {
            printf("New room is full. Cannot change room.\n");
        }
    } else {
        printf("Student not found.\n");
    }
}

void initializeRooms() {
    for (int i = 0; i < MAX_ROOMS; i++) {
        rooms[i].roomNumber = i + 1;
        rooms[i].capacity = ROOM_CAPACITY;
        rooms[i].currentOccupancy = 0;
    }
}

void displayRoomDetails() {
    int roomNumber;
    printf("Enter room number to display details (1-%d): ", MAX_ROOMS);
    scanf("%d", &roomNumber);

    if (roomNumber < 1 || roomNumber > MAX_ROOMS) {
        printf("Invalid room number. Please try again.\n");
        return;
    }

    displaySpecificRoomDetails(roomNumber);
}

void displaySpecificRoomDetails(int roomNumber) {
    int roomIndex = roomNumber - 1;

    if (rooms[roomIndex].currentOccupancy == 0) {
        printf("Room %d is currently empty.\n", roomNumber);
    } else {
        printf("\n--------------------------------------------------------------\n");
        printf("\t\tRoom %d Details:\n", roomNumber);
        printf("\n\tCapacity: %d\n", rooms[roomIndex].capacity);
        printf("\tCurrent Occupancy: %d\n", rooms[roomIndex].currentOccupancy);
        printf("\tStudents in Room %d:\n", roomNumber);

        for (int i = 0; i < studentCount; i++) {
            if (students[i].roomNumber == roomNumber) {
                printf("Reg No: %d, Name: %s, Contact: %s\n", students[i].registrationNumber, students[i].name, students[i].contact);
            }
        }
    }
}

