#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Error: File cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}
