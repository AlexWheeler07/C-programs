/*Write a program to perform addition and subtraction between two matrices.*/

#include <stdio.h>

#define MAX 10  // Define the maximum size of the matrix

// Function to perform matrix addition
void add_matrices(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to perform matrix subtraction
void subtract_matrices(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to display the matrix
void display_matrix(int mat[][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int row, col;

    // Input the number of rows and columns
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &row, &col);

    int mat1[MAX][MAX], mat2[MAX][MAX], result_add[MAX][MAX], result_sub[MAX][MAX];

    // Input the first matrix
    printf("\nEnter elements of the first matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input the second matrix
    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Perform matrix addition
    add_matrices(mat1, mat2, result_add, row, col);
    
    // Perform matrix subtraction
    subtract_matrices(mat1, mat2, result_sub, row, col);

    // Display the results
    printf("\nSum of the matrices:\n");
    display_matrix(result_add, row, col);

    printf("\nDifference of the matrices:\n");
    display_matrix(result_sub, row, col);

    return 0;
}
