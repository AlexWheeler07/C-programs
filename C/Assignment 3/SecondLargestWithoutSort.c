/*Write a program to find the second-highest number from the array without using sorting.*/

#include <stdio.h>

int find_second_highest(int arr[], int n) {
    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return -1; // Not enough elements for second-highest
    }

    int first = arr[0];
    int second = -1; // Initialize to an invalid number (could also use INT_MIN)

    for (int i = 1; i < n; i++) {
        // If current element is higher than the highest
        if (arr[i] > first) {
            second = first;  // Update second to the previous highest
            first = arr[i];  // Update the highest
        }
        // If the current element is between first and second
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i]; // Update second-highest
        }
    }

    return second;
}

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array should have at least two elements to find the second-highest number.\n");
        return 0;
    }

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to find the second-highest number
    int result = find_second_highest(arr, n);

    if (result != -1) {
        printf("The second-highest number in the array is: %d\n", result);
    } else {
        printf("Second-highest number not found.\n");
    }

    return 0;
}
