#include <stdio.h>

int main() {
    int n, k, i, j, temp;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k
    printf("Enter k: ");
    scanf("%d", &k);

    // Sort the array in ascending order using Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the kth smallest element (at index k - 1)
    if (k >= 1 && k <= n) {
        printf("%d\n", arr[k - 1]);
    } else {
        printf("Invalid value of k\n");
    }

    return 0;
}
