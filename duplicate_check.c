#include <stdio.h>
int flag;
int hasDuplicate(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return 1;  
            }
            
        }
    }
    return 0;
}

int main() {
    int arr[100],size,i;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&size);
    printf("Enter the elements in the array:\n");
    for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);

    }

 
    if (hasDuplicate(arr,size)) {
        printf("Array has duplicate elements.\n");
    } else {
        printf("Array has no duplicate elements.\n");
    }
    return 0;
}
