#include <stdio.h>

int main() {
    int n, target;
    int first = -1, last = -1;

    // Input the size of the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    // Input sorted array elements
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input the target element
    printf("Enter target: ");
    scanf("%d", &target);

    // Find first and last occurrence
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i; // Set first occurrence only once
            }
            last = i;      // Keep updating last occurrence
        }
    }

    // Print the result
    printf("%d,%d\n", first, last);

    return 0;
}
