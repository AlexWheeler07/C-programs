/*Write a C program to check whether a number is a prime, Armstrong, or Perfect number using functions.*/

#include <stdio.h>
#include <math.h>

// Function prototypes
int is_prime(int);          // Function to check if a number is prime
int is_armstrong(int);      // Function to check if a number is Armstrong
int is_perfect(int);        // Function to check if a number is perfect

int main() {
    int num;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and display if the number is prime, Armstrong, or Perfect
    if (is_prime(num)) {
        printf("%d is a Prime number.\n", num);
    } else {
        printf("%d is not a Prime number.\n", num);
    }

    if (is_armstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    if (is_perfect(num)) {
        printf("%d is a Perfect number.\n", num);
    } else {
        printf("%d is not a Perfect number.\n", num);
    }

    return 0;
}

// Function to check if a number is prime
int is_prime(int n) {
    if (n <= 1) {
        return 0;  // 0 and 1 are not prime numbers
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;  // If divisible by any number other than 1 and itself, not prime
        }
    }
    return 1;  // If no divisors found, the number is prime
}

// Function to check if a number is Armstrong
int is_armstrong(int n) {
    int original = n, sum = 0, digits = 0;

    // Count the number of digits
    while (n != 0) {
        digits++;
        n /= 10;
    }

    n = original;

    // Calculate the sum of the digits raised to the power of the number of digits
    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }

    return (sum == original);  // If the sum equals the original number, it's an Armstrong number
}

// Function to check if a number is perfect
int is_perfect(int n) {
    int sum = 0;

    // Find all divisors and calculate the sum
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return (sum == n);  // If the sum of divisors equals the number, it's a perfect number
}
