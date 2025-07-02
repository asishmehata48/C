#include <stdio.h>

int main() {
    char ch;

    // Input a character from user
    printf("Enter a Digit: ");
    scanf("%c", &ch);

    // Check if the character is a digit
    if (ch >= '0' && ch <= '9') {
        printf("'%c' is a digit.\n", ch);
    } else {
        printf("'%c' is not a digit.\n", ch);
    }

    return 0;
}
