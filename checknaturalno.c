#include <stdio.h>

int main() {
    int num;

    // Input a number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a natural number
    if (num > 0) {
        printf("%d is a natural number.\n", num);
    } else {
        printf("%d is not a natural number.\n", num);
    }

    return 0;
}
