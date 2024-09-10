#include <stdio.h> 
 
int main() { 
    int base, exp, result = 1; 
 
    printf("Enter base: "); 
    scanf("%d", &base); 
 
    printf("Enter exponent: "); 
    scanf("%d", &exp); 
 
    for (int i = 1; i <= exp; i++) { 
        result *= base; 
    } 
 
    printf("Result: %d\n", result); 
 
    return 0; } 