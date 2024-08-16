#include<stdio.h>

int sumDiagonal(int matrix[][10], int n);
int sumLowerTriangleMinusDiagonal(int matrix[][10], int n);
int sumUpperTriangleMinusDiagonal(int matrix[][10], int n);

int main()
{
    int matrix[10][10], n, sumDiag, sumLower, sumUpper;

    // Reading the size of the matrix(square matrix)
    printf("Enter the size of the square matrix(n*n): ");
    scanf("%d", &n);

    // Reading elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("Element[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    } 

    // Calculating the sums
    sumDiag = sumDiagonal(matrix, n);
    sumLower = sumLowerTriangleMinusDiagonal(matrix, n);
    sumUpper = sumUpperTriangleMinusDiagonal(matrix, n);

    // Displaying the results
    printf("\n The sum of the diagonal elements is: %d\n", sumDiag);
    printf("The sum of the Lower triangle elements (minus the main diagonal) is: %d\n", sumLower);
    printf("The sum of the Upper triangle elements (minus the main diagonal) is: %d\n", sumUpper);
 
    return 0;
}

// Function to calculate the sum of the diagonal elements
int sumDiagonal(int matrix[][10], int n ){
    int sum = 0;
    for (int i=0;i<n;i++){
        sum+=matrix[i][i];
    }
    return sum;
}

// Function to calculate the sum of the lower triangular elements excluding the main diagonal
int sumLowerTriangleMinusDiagonal(int matrix[][10], int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {  // Start from i = 1 to exclude the main diagonal
        for (int j = 0; j < i; j++) {  // Only consider elements where j < i (excluding diagonal)
            sum += matrix[i][j];
        }
    }
    return sum;
}

// Function to calculate the sum of the upper triangular elements excluding the main diagonal
int sumUpperTriangleMinusDiagonal(int matrix[][10], int n) {
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {  // Exclude the last row
        for (int j = i + 1; j < n; j++) {  // Only consider elements where j > i (excluding diagonal)
            sum += matrix[i][j];
        }
    }
    return sum;
}