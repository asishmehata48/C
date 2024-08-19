#include <stdio.h>

int main() {
    // Define an array of integers with a size of 5
    int numbers[5] = {10, 20, 30, 40, 50};
    
    // Display the contents of the array
    printf("The numbers in the array are:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}
