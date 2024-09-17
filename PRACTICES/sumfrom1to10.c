#include <stdio.h> 
 
int main() { 
    int i, sum = 0; 
    for (i = 1; i <= 10; i++) { 
        sum += i; 
    } 
    printf("Sum from 1 to 10 is %d\n", sum);
    return 0; 
} 