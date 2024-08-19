#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100], c;

    printf("Enter the filename to open: ");
    gets(filename);

    fptr = fopen(filename, "r");

    if (fptr == NULL) {
        printf("Error in opening file!\n");
        return 1;
    }

    printf("Content of the file:\n");
    while ((c = fgetc(fptr)) != EOF) {
        putchar(c);
    }

    fclose(fptr);
    return 0;
}
