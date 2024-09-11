#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    printf("Entered elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    free(arr); // Freeing the dynamically allocated memory
    return 0;
}
