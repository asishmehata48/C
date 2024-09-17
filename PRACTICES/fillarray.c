#include <stdio.h> 
 
int main() { 
    int n, i; 
  
    printf("Enter the number of elements: "); 
    scanf("%d", &n); 
 
    int array[n]; 
 
    for (i = 0; i < n; i++) { 
        printf("Enter element %d: ", i + 1); 
        scanf("%d", &array[i]); 
    } 
 
    printf("The elements in the array are: "); 
    for (i = 0; i < n; i++) { 
        printf("%d ", array[i]); 
    } 
    printf("\n"); 
 
    return 0; 
} 