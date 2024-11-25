/*Write a C program to read an integer number and print the reverse of that number using recursion.*/

#include <stdio.h>

// Function prototype
void reverse_number(int n);

int main() {
    int num;

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Reverse of the number is: ");
    reverse_number(num);
    printf("\n");

    return 0;
}

// Recursive function to reverse the digits of the number
void reverse_number(int n) {
    // Base case: when the number is less than 10, simply print the number
    if (n == 0) {
        return;
    }

    // Print the last digit (n % 10)
    printf("%d", n % 10);

    // Recursive call with the number without the last digit (n / 10)
    reverse_number(n / 10);
}
