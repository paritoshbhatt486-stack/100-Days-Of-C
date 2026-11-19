#include <stdio.h>

int main() {
    int n, x;

    // 1. Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // 2. Input the sorted array elements
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Input the target value x
    printf("Enter x: ");
    scanf("%d", &x);

    // 4. Find the ceil index
    int ceilIndex = -1; // Default to -1 if no ceil exists

    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break; // Stop immediately to get the first occurrence
        }
    }

    // 5. Print the result
    printf("%d\n", ceilIndex);

    return 0;
}
