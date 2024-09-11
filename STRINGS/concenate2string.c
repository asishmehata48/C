#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    strcat(str1, str2);
    printf("Concatenated string: %s", str1);
    return 0;
}
