#include<stdio.h>
#include<string.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book books[3];
    for(int i = 0; i < 3; i++) {
        printf("Enter title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = 0;
        printf("Enter author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0;
        printf("Enter price: ");
        scanf("%f", &books[i].price);
        getchar();
    }
    for(int i = 0; i < 3; i++) {
        printf("Title: %s\nAuthor: %s\nPrice: %.2f\n", books[i].title, books[i].author, books[i].price);
    }
    return 0;
}