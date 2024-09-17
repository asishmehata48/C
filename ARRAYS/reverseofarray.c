#include <stdio.h>

int main() {
    int arr[5], revArr[5];

    printf("Enter 5 elements: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 5; i++) {
        revArr[i] = arr[4 - i];
    }

    printf("Reversed array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", revArr[i]);
    }
    printf("\n");

    return 0;
}
