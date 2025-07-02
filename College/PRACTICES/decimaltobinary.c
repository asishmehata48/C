#include <stdio.h> 
 
int main() { 
    int n, i; 
    int binary[32]; 
 
    printf("Enter a decimal number: "); 
    scanf("%d", &n); 
 
    i = 0; 
    while (n > 0) { 
        binary[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
 
    printf("Binary: "); 
    for (int j = i - 1; j >= 0; j--) { 
        printf("%d", binary[j]); 
    } 
       printf("\n"); 
 
    return 0; 
}