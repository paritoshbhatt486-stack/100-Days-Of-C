#include <stdio.h>

int main() {
    int rows, cols;
    
    // Read matrix dimensions
    if (scanf("%d %d", &rows, &cols) != 2) {
        return 1;
    }

    int matrix[rows][cols];

    // Read matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A non-square matrix cannot be symmetric
    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    // Check if matrix[i][j] == matrix[j][i]
    int isSymmetric = 1; // 1 represents True, 0 represents False
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    // Print the result
    if (isSymmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
