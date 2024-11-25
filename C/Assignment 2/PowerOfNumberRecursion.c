/*Write a C program to find the power of any number using recursion.*/

#include <stdio.h>

// Function prototype
int power(int base, int exp);  // Function to calculate the power of a number using recursion

int main() {
    int base, exp;

    // Get input from the user
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    // Call the power function and display the result
    int result = power(base, exp);
    printf("%d raised to the power of %d is: %d\n", base, exp, result);

    return 0;
}

// Recursive function to calculate the power of a number
int power(int base, int exp) {
    // Base case: Any number raised to the power of 0 is 1
    if (exp == 0) {
        return 1;
    }
    // Recursive case: base^exp = base * base^(exp-1)
    return base * power(base, exp - 1);
}
