#include <stdio.h>

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is in the range of 100 to 500
    if (num >= 100 && num <= 500) {
        // Check if the number is divisible by both 5 and 11
        if (num % 5 == 0 && num % 11 == 0) {
            printf("%d is divisible by both 5 and 11.\n", num);
        } else {
            printf("%d is not divisible by both 5 and 11.\n", num);
        }
    } else {
        printf("Please enter a number between 100 and 500.\n");
    }

    return 0;
}
