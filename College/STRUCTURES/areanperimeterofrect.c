#include <stdio.h>

struct Rectangle {
    float length;
    float breadth;
};

int main() {
    struct Rectangle r;
    float area, perimeter;

    // Input dimensions
    printf("Enter length and breadth of the rectangle: ");
    scanf("%f %f", &r.length, &r.breadth);

    // Calculate area and perimeter
    area = r.length * r.breadth;
    perimeter = 2 * (r.length + r.breadth);

    // Display results
    printf("\nArea: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}
