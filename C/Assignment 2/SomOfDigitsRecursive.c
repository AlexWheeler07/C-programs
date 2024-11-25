/*Write a C program to find the sum of the digits of the number using a recursive function.*/

#include <stdio.h>

// Recursive function to find the sum of digits
int sum_of_digits(int num) {
    // Base case: if the number becomes 0, return 0
    if (num == 0) {
        return 0;
    } else {
        // Recursive step: add the last digit and recurse with the rest of the number
        return num % 10 + sum_of_digits(num / 10);
    }
}

int main() {
    int number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the recursive function to calculate the sum of digits
    int result = sum_of_digits(number);

    // Output the result
    printf("The sum of the digits of %d is %d\n", number, result);

    return 0;
}
