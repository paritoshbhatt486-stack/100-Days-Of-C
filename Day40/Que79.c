#include <stdio.h>

void findDiagonalOrder(int m, int n, int mat[m][n]) {
    int row = 0, col = 0;
    int up = 1; // 1 means moving up-right, 0 means moving down-left

    for (int k = 0; k < m * n; k++) {
        printf("%d ", mat[row][col]);

        if (up) {
            // Moving up-right
            if (col == n - 1) {
                row++;
                up = 0;
            } else if (row == 0) {
                col++;
                up = 0;
            } else {
                row--;
                col++;
            }
        } else {
            // Moving down-left
            if (row == m - 1) {
                col++;
                up = 1;
            } else if (col == 0) {
                row++;
                up = 1;
            } else {
                row++;
                col--;
            }
        }
    }
    printf("\n");
}

int main() {
    int m = 3, n = 3;
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Output: ");
    findDiagonalOrder(m, n, mat);

    return 0;
}
