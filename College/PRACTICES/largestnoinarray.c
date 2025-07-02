#include <stdio.h> 
 
int main() { 
    int n, i, max; 
 
    printf("Enter the number of elements: "); 
    scanf("%d", &n); 
 
    int array[n]; 
 
    printf("Enter the elements: "); 
    for (i = 0; i < n; i++) { 
        scanf("%d", &array[i]); 
    } 
 
    max = array[0]; 
    for (i = 1; i < n; i++) { 
        if (array[i] > max) { 
                 max = array[i]; 
        } 
    } 
 
    printf("The largest element is: %d\n", max); 
 
    return 0; 
}