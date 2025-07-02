#include <stdio.h> 
#define PI 3.14159265358979323846 
 
int main() { 
    float radius, area; 
 
    
    printf("Enter the radius of the circle: "); 
    scanf("%f", &radius); 
 
    area = PI * radius * radius; 
 
    printf("Area: %.2f\n", area); 
 
    return 0; 
}