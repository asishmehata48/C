#include <stdio.h>

int main() {
    FILE *file;
    char input[100];

    file = fopen("output.txt", "a");
    if (file == NULL) {
        printf("Error: File cannot be opened.\n");
        return 1;
    }

    printf("Enter a string to append: ");
    fgets(input, sizeof(input), stdin);
    fprintf(file, "%s", input);

    fclose(file);
    printf("Data appended to file successfully.\n");
    return 0;
}
