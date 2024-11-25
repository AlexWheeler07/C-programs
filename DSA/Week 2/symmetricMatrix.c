#include <stdio.h>

int MAX = 100;

void readMatrix(int size, int matrix[MAX][MAX]) {
    printf("Enter elements of the matrix (%d x %d):\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int isSymmetric(int size, int matrix[MAX][MAX]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0;  
            }
        }
    }
    return 1; 
}

void printMatrix(int size, int matrix[MAX][MAX]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int size;
    int matrix[MAX][MAX];


    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    readMatrix(size, matrix);

    printf("The input matrix is:\n");
    printMatrix(size, matrix);

    if (isSymmetric(size, matrix)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
