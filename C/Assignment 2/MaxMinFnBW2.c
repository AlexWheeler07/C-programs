/*Using functions, write a C program to find the maximum and minimum between two numbers.*/

#include <stdio.h>

// Function prototypes
int find_max(int, int);  // Function to find the maximum of two numbers
int find_min(int, int);  // Function to find the minimum of two numbers

int main() {
    int num1, num2;

    // Get input from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Call functions to find the maximum and minimum
    int max = find_max(num1, num2);
    int min = find_min(num1, num2);

    // Display the results
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}

// Function to find the maximum of two integers
int find_max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Function to find the minimum of two integers
int find_min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}
