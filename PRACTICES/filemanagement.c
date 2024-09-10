#include <stdio.h> 
 
int main() { 
    FILE *file; 
 
    file = fopen("output.txt", "w"); 
     
    
    if (file == NULL) { 
        printf("Error opening file!\n"); 
        return 1; 
    } 
 
    fprintf(file, "Hello, this is a sample text."); 
    
    fclose(file); 
 
    return 0; 
}
