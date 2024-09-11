#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex num1, num2, sum;

    // Input two complex numbers
    printf("Enter first complex number (real and imaginary): ");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("Enter second complex number (real and imaginary): ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Add the complex numbers
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    // Display the result
    printf("\nSum = %.1f + %.1fi\n", sum.real, sum.imag);

    return 0;
}
