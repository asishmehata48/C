#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10], i, j, rows, columns;

    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &columns);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
