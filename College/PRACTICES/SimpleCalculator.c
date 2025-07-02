#include <stdio.h> 
 
int main() { 
    int a, b; 
     
    // Entrée des deux nombres 
    printf("Enter the first number: "); 
    scanf("%d", &a); 
     
    printf("Enter the second number: "); 
    scanf("%d", &b); 
     
    // Calcul et affichage des résultats 
    printf("Sum: %d\n", a + b); 
    printf("Difference: %d\n", a - b); 
    printf("Product: %d\n", a * b); 
    printf("Quotient: %.2f\n", (float)a / b); 
 
    return 0; 
} 