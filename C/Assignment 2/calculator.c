/*1.Write a C program to add, subtract, multiply, and divide two integers using a user-defined type function with a return type.*/

#include <stdio.h>

// Function prototypes
int add(int, int);
int subtract(int, int);
int multiply(int, int);
float divide(int, int);  // Using float to handle division results with decimal points

int main() {
    int num1, num2;
    int sum, diff, prod;
    float quotient;

    // Input two integers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Call the functions
    sum = add(num1, num2);
    diff = subtract(num1, num2);
    prod = multiply(num1, num2);
    quotient = divide(num1, num2);

    // Display the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    if (num2 != 0) {
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}

// Function definitions

// Add two integers
int add(int a, int b) {
    return a + b;
}

// Subtract two integers
int subtract(int a, int b) {
    return a - b;
}

// Multiply two integers
int multiply(int a, int b) {
    return a * b;
}

// Divide two integers (float return type to handle division result)
float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero.\n");
        return 0.0;  // Return 0 if division by zero occurs
    }
    return (float)a / b;
}
