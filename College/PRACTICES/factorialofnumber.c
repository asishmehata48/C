#include <stdio.h> 
 
int main() { 
    int n, i; 
    unsigned long long fact = 1; 
 
    printf("Enter a number: "); 
    scanf("%d", &n); 
 
    for (i = 1; i <= n; ++i) { 
        fact *= i; 
    } 
 
    printf("Factorial of %d = %llu\n", n, fact); 
 
    return 0; 
}