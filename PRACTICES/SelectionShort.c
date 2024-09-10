#include <stdio.h> 
 
int main() { 
    int array[5] = {64, 25, 12, 22, 11}; 
    int n = 5; 
    for (int i = 0; i < n-1; i++) { 
        int min_idx = i; 
        for (int j = i+1; j < n; j++) 
            if (array[j] < array[min_idx]) 
                min_idx = j; 
 
        int temp = array[min_idx]; 
        array[min_idx] = array[i]; 
        array[i] = temp; 
    } 
 
    printf("Sorted array: \n"); 
    for (int i = 0; i < n; i++) 
        printf("%d ", array[i]); 
    return 0;
}    