#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int count = 0;

    file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Error: File cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        count++;
    }

    fclose(file);
    printf("The file contains %d characters.\n", count);
    return 0;
}
