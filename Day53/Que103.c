#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    int totalSum = 0;

    // Input the array elements and calculate the total sum
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    int leftSum = 0;
    int pivotIndex = -1;

    // Find the leftmost pivot index
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum) {
            pivotIndex = i;
            break; // Stop at the first (leftmost) match
        }

        leftSum += nums[i];
    }

    // Output the result
    printf("%d\n", pivotIndex);

    return 0;
}
