#include <stdio.h>

// Function to update array values using pointers
void updateArray(int* arr, int size) {
    printf("\nInside the function:\n");
    for (int i = 0; i < size; i++) {
        arr[i] += 10; // Update each element by adding 10
        printf("%d\n",arr[i]);
    }
}

int main() {
    int n;

    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print array before updating
    printf("\nBefore calling the function:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n",arr[i]);
    }

    // Call the function to update the array
    updateArray(arr, n);

    // Print array after updating
    printf("\nAfter returning from the function:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n",arr[i]);
    }

    return 0;
}
