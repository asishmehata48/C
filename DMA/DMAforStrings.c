#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str, *rev;
    int len, i;

    str = (char*) malloc(100 * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    len = strlen(str);
    rev = (char*) malloc(len * sizeof(char));
    if (rev == NULL) {
        printf("Memory allocation failed.\n");
        free(str);
        return 1;
    }

    for (i = 0; i < len - 1; i++) {  // -1 to exclude the newline character
        rev[i] = str[len - 2 - i];   // -2 to account for null terminator and newline
    }
    rev[len - 1] = '\0';

    printf("Reversed string: %s\n", rev);

    free(str);
    free(rev);
    return 0;
}
