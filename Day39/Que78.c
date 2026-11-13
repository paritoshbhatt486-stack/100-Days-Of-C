#include <stdio.h>

int main() {
    int rows, cols;
    
    // Read the number of rows and columns
    scanf("%d %d", &rows, &cols);
    
    // Check if the matrix is square
    if (rows != cols) {
        printf("Matrix is not a square matrix.\n");
        return 0;
    }
    
    int matrix[rows][cols];
    int sum = 0;
    
    // Read matrix elements and calculate main diagonal sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            
            // Main diagonal elements have the same row and column index
            if (i == j) {
                sum = sum + matrix[i][j];
            }
        }
    }
    
    // Print the final sum
    printf("%d\n", sum);
    
    return 0;
}
