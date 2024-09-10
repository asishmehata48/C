#include <stdio.h> 
  //GCD: GREATEST COMMON DIVISOR
int main() { 
    int n1 = 56, n2 = 98; 
    while(n1 != n2) { 
        if(n1 > n2) 
            n1 -= n2; 
        else 
            n2 -= n1; 
    } 
    printf("GCD = %d", n1); 
    return 0; 
}