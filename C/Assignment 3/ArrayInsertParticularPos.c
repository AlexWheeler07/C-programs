/*Write a program to insert an element in an array in a particular position.*/
#include <stdio.h>

int main() {
    int n, pos, element;

    // Get the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1];  // Array size is increased by 1 to accommodate the new element

    // Get the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the position and element to insert
    printf("Enter the position (0 to %d) to insert the element: ", n);
    scanf("%d", &pos);
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;  // Exit if position is invalid
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Shift elements to the right to make space for the new element
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the given position
    arr[pos] = element;

    // Print the updated array
    printf("\nArray after insertion:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
