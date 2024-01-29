#include <stdio.h>

void addMatrices(int rows, int columns, int a[rows][columns], int b[rows][columns], int sum[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int x = 0; x < columns; x++) {
            sum[i][x] = a[i][x] + b[i][x];
        }
    }
}

void multiplyMatrices(int aRows, int aColumns, int bColumns, int a[aRows][aColumns], int b[aColumns][bColumns], int product[aRows][bColumns]) {
    for (int i = 0; i < aRows; i++) {
        for (int x = 0; x < bColumns; x++) {
            product[i][x] = 0;
            for (int y = 0; y < aColumns; y++) {
                product[i][x] += a[i][y] * b[y][x];
            }
        }
    }
}

void printMatrix(int rows, int columns, int matrix[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int x = 0; x < columns; x++) {
            printf("%d ", matrix[i][x]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2];
    int product[2][2];

    addMatrices(2, 2, matrix1, matrix2, sum);
    multiplyMatrices(2, 2, 2, matrix1, matrix2, product);

    printf("Matrix Addition:\n");
    printMatrix(2, 2, sum);
    printf("Matrix Multiplication:\n");
    printMatrix(2, 2, product);

    return 0;
}
