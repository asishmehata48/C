#include <stdio.h>

int main() {
    FILE *srcFile, *destFile;
    char ch;

    srcFile = fopen("ayo.txt", "r");
    destFile = fopen("output.txt", "w");

    if (srcFile == NULL || destFile == NULL) {
        printf("Error: File cannot be opened.\n");
        return 1;
    }

    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }

    fclose(srcFile);
    fclose(destFile);

    printf("File copied successfully.\n");
    return 0;
}
