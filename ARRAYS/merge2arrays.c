#include <stdio.h>

int main() {
    int arr1[3], arr2[3], merged[6];

    printf("Enter 3 elements for the first array: ");
    for(int i = 0; i < 3; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 3 elements for the second array: ");
    for(int i = 0; i < 3; i++) {
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < 3; i++) {
        merged[i] = arr1[i];
        merged[i + 3] = arr2[i];
    }

    printf("Merged array: ");
    for(int i = 0; i < 6; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}