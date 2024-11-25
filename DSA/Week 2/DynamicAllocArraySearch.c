#include <stdio.h>
#include <stdlib.h>  // For malloc() and free()

int main() {
    int *array;      // Pointer for the dynamically allocated array
    int n, search, found = 0;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    array = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Read the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Ask the user for the element to search
    printf("Enter the element to search: ");
    scanf("%d", &search);

    // Search for the element in the array
    for (int i = 0; i < n; i++) {
        if (array[i] == search) {
            printf("Element %d found at position %d\n", search, i + 1);
            found = 1;
            break;
        }
    }

    // If the element is not found
    if (!found) {
        printf("Element %d not found in the array.\n", search);
    }

    // Free the dynamically allocated memory
    free(array);

    return 0;
}
