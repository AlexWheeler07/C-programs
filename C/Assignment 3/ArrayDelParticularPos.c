/*Write a program to delete an element from a particular position of an array.*/
#include <stdio.h>

int main() {
    int n, pos;

    // Get the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare the array
    int arr[n];

    // Get the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the position of the element to delete
    printf("Enter the position (0 to %d) to delete the element: ", n - 1);
    scanf("%d", &pos);

    // Validate the position
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 1;  // Exit if position is invalid
    }

    // Shift elements to the left to fill the gap
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print the updated array
    printf("\nArray after deletion:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
