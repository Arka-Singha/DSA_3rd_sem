//NAME-ARKA SINGHA
//Roll No. 2230068
#include <stdio.h>
// a) Find the number of nonzero elements in the matrix
int countNonZeroElements(int A[][100], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != 0) {
                count++;
            }
        }
    }
    return count;
}

// b) The sum of elements above the principal diagonal
int sumAboveDiagonal(int A[][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum += A[i][j];
        }
    }
    return sum;
}

// c) Display the elements below the minor diagonal
void displayBelowMinorDiagonal(int A[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j) {
                printf("%d ", A[i][j]);
            }
        }
    }
}

// d) Find the product of diagonal elements
int productOfDiagonalElements(int A[][100], int n) {
    int product = 1;
    for (int i = 0; i < n; i++) {
        product *= A[i][i];
    }
    return product;
}

int main() {
    int n;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int A[100][100];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // a) Find the number of nonzero elements in the matrix
    int nonzeroCount = countNonZeroElements(A, n);
    printf("Number of nonzero elements in the matrix: %d\n", nonzeroCount);

    // b) Find the sum of elements above the principal diagonal
    int sumAboveDiag = sumAboveDiagonal(A, n);
    printf("Sum of elements above the leading diagonal: %d\n", sumAboveDiag);

    // c) Display the elements below the minor diagonal
    printf("Elements below the minor diagonal:\n");
    displayBelowMinorDiagonal(A, n);
    printf("\n");

    // d) Find the product of diagonal elements
    int diagProduct = productOfDiagonalElements(A, n);
    printf("Product of diagonal elements: %d\n", diagProduct);

    return 0;
}