#include <stdio.h>

int main() {
    char ch;

    // Input a character from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a digit
    if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a character.\n", ch);
    } else {
        printf("'%c' is not a character.\n", ch);
    }

    return 0;
}
