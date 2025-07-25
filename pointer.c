// Library Management System - Mini Project
// Covers: Variables, Data Types, Expressions, I/O, Conditionals, Loops, Functions, Recursion, Arrays, Strings, Structures, File Handling
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Book {
    int id;
    char title[100];
    char author[100];
    bool isBorrowed;
};

// Function prototypes
displayMenu();
void addBook();
void displayBooks();
void searchBook();
void borrowBook();
void returnBook();
int countBooksRecursive(int, int); // Recursion

const char* FILENAME = "library.dat";

int main() {
    int choice;
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch(choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: borrowBook(); break;
            case 5: returnBook(); break;
            case 6: {
                ifstream fin(FILENAME, ios::binary);
                fin.seekg(0, ios::end);
                int n = fin.tellg() / sizeof(Book);
                fin.close();
                cout << "Total books (using recursion): " << countBooksRecursive(n, 0) << endl;
                break;
            }
            case 0: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    } while(choice != 0);
    return 0;
}

void displayMenu() {
    cout << "\n===== Library System Menu =====" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Display All Books" << endl;
    cout << "3. Search Book" << endl;
    cout << "4. Borrow Book" << endl;
    cout << "5. Return Book" << endl;
    cout << "6. Count Books (Recursion)" << endl;
    cout << "0. Exit" << endl;
}

void addBook() {
    Book b;
    cout << "Enter Book ID: ";
    cin >> b.id;
    cin.ignore();
    cout << "Enter Title: ";
    cin.getline(b.title, 100);
    cout << "Enter Author: ";
    cin.getline(b.author, 100);
    b.isBorrowed = false;
    ofstream fout(FILENAME, ios::binary | ios::app);
    fout.write((char*)&b, sizeof(b));
    fout.close();
    cout << "Book added successfully!" << endl;
}

void displayBooks() {
    ifstream fin(FILENAME, ios::binary);
    Book b;
    cout << "\n--- Book List ---" << endl;
    while(fin.read((char*)&b, sizeof(b))) {
        cout << "ID: " << b.id << ", Title: " << b.title << ", Author: " << b.author << ", Status: " << (b.isBorrowed ? "Borrowed" : "Available") << endl;
    }
    fin.close();
}

void searchBook() {
    int sid;
    cout << "Enter Book ID to search: ";
    cin >> sid;
    ifstream fin(FILENAME, ios::binary);
    Book b;
    bool found = false;
    while(fin.read((char*)&b, sizeof(b))) {
        if(b.id == sid) {
            cout << "Found: Title: " << b.title << ", Author: " << b.author << ", Status: " << (b.isBorrowed ? "Borrowed" : "Available") << endl;
            found = true;
            break;
        }
    }
    if(!found) cout << "Book not found!" << endl;
    fin.close();
}

void borrowBook() {
    int sid;
    cout << "Enter Book ID to borrow: ";
    cin >> sid;
    fstream file(FILENAME, ios::binary | ios::in | ios::out);
    Book b;
    bool found = false;
    while(file.read((char*)&b, sizeof(b))) {
        if(b.id == sid && !b.isBorrowed) {
            b.isBorrowed = true;
            file.seekp(-sizeof(b), ios::cur);
            file.write((char*)&b, sizeof(b));
            cout << "Book borrowed!" << endl;
            found = true;
            break;
        }
    }
    if(!found) cout << "Book not found or already borrowed!" << endl;
    file.close();
}

void returnBook() {
    int sid;
    cout << "Enter Book ID to return: ";
    cin >> sid;
    fstream file(FILENAME, ios::binary | ios::in | ios::out);
    Book b;
    bool found = false;
    while(file.read((char*)&b, sizeof(b))) {
        if(b.id == sid && b.isBorrowed) {
            b.isBorrowed = false;
            file.seekp(-sizeof(b), ios::cur);
            file.write((char*)&b, sizeof(b));
            cout << "Book returned!" << endl;
            found = true;
            break;
        }
    }
    if(!found) cout << "Book not found or not borrowed!" << endl;
    file.close();
}

// Recursive function to count books
int countBooksRecursive(int n, int count) {
    if(n == 0) return count;
    return countBooksRecursive(n-1, count+1);
}
