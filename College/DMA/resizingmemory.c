#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, new_n, i;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter new number of elements: ");
    scanf("%d", &new_n);

    arr = (int*) realloc(arr, new_n * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    if (new_n > n) {
        printf("Enter %d more integers: ", new_n - n);
        for (i = n; i < new_n; i++) {
            scanf("%d", &arr[i]);
        }
    }

    printf("Final array: ");
    for (i = 0; i < new_n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
