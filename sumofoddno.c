#include <stdio.h>

int main() {
    int start, end, sum = 0;

    
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Iterate through the range and add odd numbers
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {  // Check if the number is odd
            sum += i;
        }
    }

    // Output the result
    printf("Sum of odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}
