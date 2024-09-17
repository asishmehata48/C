#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100], c;

    printf("Enter the filename to create: ");
    gets(filename);

    fptr = fopen(filename, "w");

    if (fptr == NULL) {
        printf("Error in opening file!\n");
        return 1;
    }

    printf("Enter content to write to the file: ");
    while ((c = getchar()) != '\n') {
        fputc(c, fptr);
    }

    fclose(fptr);
    printf("File created successfully.\n");
    return 0;
}
