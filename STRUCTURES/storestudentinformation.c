#include <stdio.h>

// Defining the structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;

    // Input student details
    printf("Enter name: ");
    gets(s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Display student details
    printf("\nStudent Information:\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
