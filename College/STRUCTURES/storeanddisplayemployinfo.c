#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e;

    // Input employee details
    printf("Enter employee name: ");
    gets(e.name);
    printf("Enter employee ID: ");
    scanf("%d", &e.id);
    printf("Enter salary: ");
    scanf("%f", &e.salary);

    // Display employee details
    printf("\nEmployee Information:\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);

    return 0;
}
