/*Write a C program to check whether a number is even or odd using functions.*/

#include <stdio.h>

// Function prototype
int check_even_odd(int);  // Function to check if a number is even or odd

int main() {
    int num;

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Call the function to check if the number is even or odd
    if (check_even_odd(num)) {
        printf("%d is Odd.\n", num);
    } else {
        printf("%d is Even.\n", num);
    }

    return 0;
}

// Function to check if a number is even or odd
int check_even_odd(int n) {
    // If the number is divisible by 2, it's even; otherwise, it's odd
    return n % 2;  // Returns 0 if even, 1 if odd
}
