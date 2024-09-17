#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    int pages;
    float price;
};

int main() {
    struct Book b;

    // Input book details
    printf("Enter book title: ");
    gets(b.title);
    printf("Enter author name: ");
    gets(b.author);
    printf("Enter number of pages: ");
    scanf("%d", &b.pages);
    printf("Enter price: ");
    scanf("%f", &b.price);

    // Display book details
    printf("\nBook Information:\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Pages: %d\n", b.pages);
    printf("Price: $%.2f\n", b.price);

    return 0;
}
