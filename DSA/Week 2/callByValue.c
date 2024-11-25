#include <stdio.h>


void modifyArray(int arr[], int size) {
    printf("Inside the function before modification:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] + 10;  
    }

    printf("Inside the function after modification:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int originalArray[5] = {1, 2, 3, 4, 5};
    int copiedArray[5]; 

    for (int i = 0; i < 5; i++) {
        copiedArray[i] = originalArray[i];
    }

    printf("In main before calling the function:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", originalArray[i]);
    }
    printf("\n");

   
    modifyArray(copiedArray, 5);

    printf("In main after calling the function:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", originalArray[i]);
    }
    printf("\n");

    return 0;
}
