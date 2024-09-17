#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols, i, j;
    int **arr;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    arr = (int**) malloc(rows * sizeof(int*));
    for (i = 0; i < rows; i++) {
        arr[i] = (int*) malloc(cols * sizeof(int));
    }

    printf("Enter elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
