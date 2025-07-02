#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void display(struct Student stu) {
    printf("Name: %s\n", stu.name);
    printf("Roll: %d\n", stu.roll);
    printf("Marks: %.2f\n", stu.marks);
}

int main() {
    struct Student s1;

    printf("Enter name: ");
    gets(s1.name);
    printf("Enter roll: ");
    scanf("%d", &s1.roll);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    display(s1);

    return 0;
}
