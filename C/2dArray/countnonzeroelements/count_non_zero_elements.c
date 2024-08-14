#include<stdio.h>

// Function prototypes
int countNonZero(int matrix[][10], int rows, int cols);

int main(){
    int matrix[10][10], rows, cols, nonZeroCount;

    // Reading the size of the matrix
    printf("Enter the number of rows and columns in the matrix:");
    scanf("%d %d", &rows, &cols);


    // Reading elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Counting the non-zero elements
    nonZeroCount = countNonZero(matrix, rows, cols);

    // Displaying the result
    printf("\nThe number of non-zero elements in the matrix is: %d\n", nonZeroCount);

    return 0;
}

// Function to count non-zero elements in a matrix
int countNonZero(int matrix[][10], int rows, int cols) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                count++;
            }
        }
    }
    return count;
}