//13. WAP to find join & meet of a Boolean matrix.

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

void joinMatrix(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = A[i][j] | B[i][j];
}

void meetMatrix(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = A[i][j] & B[i][j];
}

int main() {
    int rows, cols;
    int A[MAX][MAX], B[MAX][MAX], join[MAX][MAX], meet[MAX][MAX];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix A:\n");
    inputMatrix(A, rows, cols);

    printf("Enter matrix B:\n");
    inputMatrix(B, rows, cols);

    joinMatrix(A, B, join, rows, cols);
    meetMatrix(A, B, meet, rows, cols);

    printf("Join (OR) of matrices:\n");
    printMatrix(join, rows, cols);

    printf("Meet (AND) of matrices:\n");
    printMatrix(meet, rows, cols);

    return 0;
}