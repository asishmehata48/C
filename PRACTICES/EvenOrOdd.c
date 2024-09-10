#include <stdio.h> 
 
int main() { 
    int num; 
 
    // Entrée du nombre 
    printf("Enter a number: "); 
    scanf("%d", &num); 
 
    // Vérification si le nombre est pair ou impair 
    if (num % 2 == 0) 
        printf("Even\n"); 
    else 
        printf("Odd\n"); 
 
    return 0; 
} 
 