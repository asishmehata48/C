
#include <stdio.h> 
 
int main() { 
    float p, r, t, interest; 
     
    
    printf("Enter the principal amount: "); 
    scanf("%f", &p); 
     
    printf("Enter the rate of interest: "); 
    scanf("%f", &r); 
     
    printf("Enter the time period: "); 
    scanf("%f", &t); 
     
   
    interest = (p * r * t) / 100; 
     
   
    printf("Simple Interest: %.2f\n", interest); 
 
    return 0; 
} 
