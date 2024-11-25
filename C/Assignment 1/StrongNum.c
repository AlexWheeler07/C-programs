#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, remainder, sum = 0;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    originalNum = num; // Store the original number

    // Calculate the sum of the factorials of its digits
    while (num > 0) {
        remainder = num % 10;         // Extract the last digit
        sum += factorial(remainder); // Add the factorial of the digit to the sum
        num /= 10;                   // Remove the last digit
    }

    // Check if the sum equals the original number
    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}
