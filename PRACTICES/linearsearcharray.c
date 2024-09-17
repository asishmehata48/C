#include <stdio.h>

int main() {
    int array[100], n, i, search, flag = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (array[i] == search) {
            printf("%d is present at location %d.\n", search, i + 1);
            flag = 1;
            break;
        }
    }

    if (!flag) {
        printf("%d is not present in the array.\n", search);
    }

    return 0;
}
