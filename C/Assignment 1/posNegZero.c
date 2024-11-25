#include <stdio.h>

int main() {
    float num;

    // Input a number
    printf("Enter a number: ");
    scanf("%f", &num);

    // Check whether the number is positive, negative, or zero
    if (num > 0) {
        printf("%.2f is a positive number.\n", num);
    } else if (num < 0) {
        printf("%.2f is a negative number.\n", num);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
