/*Define a structure “complex” (typedef) to read two complex numbers and perform addition and subtraction of these two
 complex numbers and display the result.
*/

#include <stdio.h>

// Define the structure for Complex Number using typedef
typedef struct {
    float real;  // Real part
    float imag;  // Imaginary part
} Complex;

// Function to add two complex numbers
Complex add_complex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtract_complex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

// Function to display a complex number
void display_complex(Complex c) {
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}

int main() {
    Complex num1, num2, sum, diff;

    // Input first complex number
    printf("Enter the real and imaginary parts of the first complex number:\n");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input second complex number
    printf("Enter the real and imaginary parts of the second complex number:\n");
    scanf("%f %f", &num2.real, &num2.imag);

    // Perform addition and subtraction
    sum = add_complex(num1, num2);
    diff = subtract_complex(num1, num2);

    // Display the results
    printf("\nFirst Complex Number: ");
    display_complex(num1);

    printf("Second Complex Number: ");
    display_complex(num2);

    printf("\nSum of the complex numbers: ");
    display_complex(sum);

    printf("Difference of the complex numbers: ");
    display_complex(diff);

    return 0;
}
