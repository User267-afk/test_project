/*Perform the following operations in zero-one matrix.
 a) Join
 b) Product*/

#include <stdio.h>

#define MAX 100

void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Enter elements (0 or 1):\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
}

void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

// Join operation (element-wise OR)
void joinMatrix(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = A[i][j] | B[i][j];
}

// Product operation (Boolean matrix multiplication)
void productMatrix(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] |= (A[i][k] & B[k][j]);
            }
        }
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;
    int A[MAX][MAX], B[MAX][MAX], join[MAX][MAX], product[MAX][MAX];

    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 1;
    }

    printf("Enter matrix A:\n");
    inputMatrix(A, rowsA, colsA);

    printf("Enter matrix B:\n");
    inputMatrix(B, rowsB, colsB);

    // Join requires matrices to be of the same dimension
    if (rowsA == rowsB && colsA == colsB) {
        joinMatrix(A, B, join, rowsA, colsA);
        printf("Join (element-wise OR) of A and B:\n");
        printMatrix(join, rowsA, colsA);
    } else {
        printf("Join operation not possible: matrices dimensions must be the same.\n");
    }

    // Product (Boolean multiplication)
    productMatrix(A, B, product, rowsA, colsA, colsB);
    printf("Product (Boolean matrix multiplication) of A and B:\n");
    printMatrix(product, rowsA, colsB);

    return 0;
}