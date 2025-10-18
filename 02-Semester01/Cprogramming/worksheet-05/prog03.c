#include <stdio.h>

#define MAX 10  // maximum matrix size

// Function prototypes
void readMatrix(int n, double A[MAX][MAX]);
void printMatrix(int n, double M[MAX][MAX]);
void decomposeMatrix(int n, double A[MAX][MAX], double B[MAX][MAX], double C[MAX][MAX]);

int main() {
    int n;
    double A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    if (n > MAX) {
        printf("Matrix size too large! Max allowed is %d.\n", MAX);
        return 1;
    }

    // Read matrix A
    printf("Enter the elements of matrix A (%d x %d):\n", n, n);
    readMatrix(n, A);

    // Compute B and C
    decomposeMatrix(n, A, B, C);

    // Print results
    printf("\nMatrix A:\n");
    printMatrix(n, A);

    printf("\nSymmetric matrix B = (A + A^T)/2:\n");
    printMatrix(n, B);

    printf("\nSkew-symmetric matrix C = (A - A^T)/2:\n");
    printMatrix(n, C);

    return 0;
}

// Function to read an n×n matrix
void readMatrix(int n, double A[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &A[i][j]);
        }
    }
}

// Function to print an n×n matrix
void printMatrix(int n, double M[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%8.2lf ", M[i][j]);
        }
        printf("\n");
    }
}

// Function to compute B (symmetric) and C (skew-symmetric)
void decomposeMatrix(int n, double A[MAX][MAX], double B[MAX][MAX], double C[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            B[i][j] = (A[i][j] + A[j][i]) / 2.0;
            C[i][j] = (A[i][j] - A[j][i]) / 2.0;
        }
    }
}
