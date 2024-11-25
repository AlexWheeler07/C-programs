/*Write a program to convert a decimal number taken as input from a user to the corresponding binary number and store the result in an array.*/

#include <stdio.h>

#define MAX_BITS 32  // Maximum number of bits in the binary representation

int main() {
    int decimal, i = 0;
    int binary[MAX_BITS];  // Array to store the binary digits (up to 32 bits)

    // Get the decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Check for zero case
    if (decimal == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    // Convert the decimal number to binary
    while (decimal > 0) {
        binary[i] = decimal % 2;  // Store the remainder (binary digit)
        decimal = decimal / 2;    // Divide the decimal number by 2
        i++;
    }

    // Print the binary number (from the last element in the array)
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);  // Print binary digits from the last stored
    }
    printf("\n");

    return 0;
}
