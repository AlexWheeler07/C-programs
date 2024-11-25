#include <stdio.h>
#include <stdlib.h>  // For calloc(), realloc(), and free()

int main() {
    int *array;     // Pointer to hold the dynamically allocated memory
    int n, new_n;

    // Ask the user for the number of elements
    printf("Enter the initial number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers using calloc()
    array = (int *)calloc(n , sizeof(int));

    // Check if memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Read the initial elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Ask the user for the new size
    printf("Enter the new number of elements: ");
    scanf("%d", &new_n);

    // Reallocate the memory to the new size using realloc()
    array = (int *)realloc(array, new_n * sizeof(int));

    // Check if reallocation was successful
    if (array == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // If the new size is larger, read additional elements
    if (new_n > n) {
        printf("Enter %d more elements:\n", new_n - n);
        for (int i = n; i < new_n; i++) {
            scanf("%d", &array[i]);
        }
    }

    // Display all the elements after reallocation
    printf("The elements after reallocation are:\n");
    for (int i = 0; i < new_n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(array);

    return 0;
}
