#include <stdio.h>

int findLargest(int *arr, int size) {
    int largest = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > largest) {
            largest = *(arr + i);
        }
    }
    return largest;
}

int main() {
    int numbers[] = {34, 67, 23, 89, 12};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int largest = findLargest(numbers, size);
    printf("Largest element = %d\n", largest);
    return 0;
}
