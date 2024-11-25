/*Write a C program to calculate the sum of the first 20 natural numbers using a recursive function.*/

#include <stdio.h>

// Function prototype
int sum_of_natural_numbers(int);

int main() {
    // Call the recursive function with the value 20
    int result = sum_of_natural_numbers(20);

    // Display the result
    printf("The sum of the first 20 natural numbers is: %d\n", result);

    return 0;
}

// Recursive function to calculate the sum of the first n natural numbers
int sum_of_natural_numbers(int n) {
    // Base case: when n is 1, return 1
    if (n == 1) {
        return 1;
    }
    // Recursive case: return n + sum of (n-1) natural numbers
    return n + sum_of_natural_numbers(n - 1);
}
