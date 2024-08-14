#include<stdio.h>

// Function prototypes
void add(int[][10], int[][10], int[][10], int, int);
void read(int[][10], int, int);
void print(int[][10], int, int);

void main() {
    int a[10][10], b[10][10], c[10][10], m, n;

    // Reading the size of the matrices
    printf("\nEnter the size of matrix: ");
    scanf("%d %d", &m, &n);

    // Reading elements of the first matrix
    printf("\nEnter the elements of the 1st matrix:\n");
    read(a, m, n);

    // Reading elements of the second matrix
    printf("\nEnter the elements of the 2nd matrix:\n");
    read(b, m, n);

    // Adding the two matrices
    add(a, b, c, m, n);

    // Displaying the matrices
    printf("\n1st matrix is:");
    print(a, m, n);

    printf("\n2nd matrix is:");
    print(b, m, n);

    printf("\nResultant matrix is:");
    print(c, m, n);
}

// Function to add two matrices
void add(int x[][10], int y[][10], int z[][10], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            z[i][j] = x[i][j] + y[i][j];
        }
    }
}

// Function to read a matrix
void read(int x[][10], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &x[i][j]);
        }
    }
}

// Function to print a matrix
void print(int x[][10], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        printf("\n");
        for (j = 0; j < n; j++) {
            printf("%d\t", x[i][j]);
        }
    }
    printf("\n");
}
