/*Write a C program to swap two integers using call-by-value and call-by-reference methods of passing arguments to a function.*/

#include <stdio.h>

// Function for Call-by-Value
void swap_by_value(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Inside swap_by_value function:\n");
    printf("a = %d, b = %d\n", a, b);  // Values swapped locally
}

// Function for Call-by-Reference
void swap_by_reference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("Inside swap_by_reference function:\n");
    printf("a = %d, b = %d\n", *a, *b);  // Values swapped globally
}

int main() {
    int x, y;

    // Input two integers
    printf("Enter two integers (x and y): ");
    scanf("%d %d", &x, &y);

    // Call swap_by_value function
    printf("\nBefore swap_by_value:\n");
    printf("x = %d, y = %d\n", x, y);
    swap_by_value(x, y);  // Call-by-value does not change x, y in main
    printf("\nAfter swap_by_value:\n");
    printf("x = %d, y = %d\n", x, y);

    // Call swap_by_reference function
    printf("\nBefore swap_by_reference:\n");
    printf("x = %d, y = %d\n", x, y);
    swap_by_reference(&x, &y);  // Call-by-reference changes x, y in main
    printf("\nAfter swap_by_reference:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
