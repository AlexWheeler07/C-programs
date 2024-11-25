#include <stdio.h>

#define MAX 100

void readMatrix(int rows, int cols, int matrix[MAX][MAX]) {
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int rows, int cols, int matrix[MAX][MAX]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int rowsA, int colsA, int matrixA[MAX][MAX],
                      int rowsB, int colsB, int matrixB[MAX][MAX],
                      int result[MAX][MAX]) {

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;
    int matrixA[MAX][MAX], matrixB[MAX][MAX], result[MAX][MAX];

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Matrix multiplication is not possible. Number of columns in the first matrix must equal the number of rows in the second matrix.\n");
        return 1;
    }

    readMatrix(rowsA, colsA, matrixA);
    readMatrix(rowsB, colsB, matrixB);

    multiplyMatrices(rowsA, colsA, matrixA, rowsB, colsB, matrixB, result);

    printf("Resulting matrix after multiplication:\n");
    printMatrix(rowsA, colsB, result);

    return 0;
}
