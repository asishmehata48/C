#include <stdio.h>

int main() {
    FILE *file;
    char input[100];

    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error: File cannot be opened.\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    fprintf(file, "%s", input);

    fclose(file);
    printf("Data written to file successfully.\n");
    return 0;
}
