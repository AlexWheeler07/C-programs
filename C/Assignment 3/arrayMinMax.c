#include<stdio.h>

void check(int arr[], int n)

{

    int small, large;

    small = large = arr[0];

    for(int i = 1; i < n ;i++){

        if(arr[i] < small) small = arr[i];

        if(arr[i] > large)

            large = arr[i];

    }

    printf("Smallest Number: %d\n",small);

    printf("Largest Number: %d", large);

}

int main()

{

    int n;

    printf("Enter the size of array: ");

    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of array: ");

    for(int i=0;i<n;i++)

    scanf("%d",&arr[i]);

    check(arr, n);

    return 0;

}