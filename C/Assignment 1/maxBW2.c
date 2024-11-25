#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Find and display the maximum number
    if (num1 > num2) {
        printf("The maximum number is: %d\n", num1);
    } else if (num2 > num1) {
        printf("The maximum number is: %d\n", num2);
    } else {
        printf("Both numbers are equal: %d\n", num1);
    }

    return 0;
}
