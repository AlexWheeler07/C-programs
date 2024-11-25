/*Write a C program to generate a Fibonacci series using a recursive function.*/

#include <stdio.h>

// Function prototype
int fibonacci(int);

int main() {
    int n;

    // Ask the user for the number of terms in the Fibonacci series
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    // Print the Fibonacci series up to n terms
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0;  // The 0th Fibonacci number is 0
    } else if (n == 1) {
        return 1;  // The 1st Fibonacci number is 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
    }
}
