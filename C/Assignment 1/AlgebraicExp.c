/*Write a C program to evaluate the algebraic expression (ax+b)/(ax-b)*/

#include <stdio.h>

int main() {
    float a, b, x, numerator, denominator, result;

    // Input values for a, b, and x
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of x: ");
    scanf("%f", &x);

    // Calculate numerator and denominator
    numerator = (a * x) + b;
    denominator = (a * x) - b;

    // Check for division by zero
    if (denominator == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    // Evaluate the expression
    result = numerator / denominator;

    // Print the result
    printf("The value of the expression (ax + b) / (ax - b) is: %.2f\n", result);

    return 0;
}
