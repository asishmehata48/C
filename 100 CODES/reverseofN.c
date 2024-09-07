#include <stdio.h> 
 
int main() { 
    int n = 12345, reversed = 0; 
    while(n != 0) { 
        reversed = reversed * 10 + n % 10; 
        n /= 10; 
    } 
    printf("Reversed number = %d", reversed); 
    return 0; 
} 