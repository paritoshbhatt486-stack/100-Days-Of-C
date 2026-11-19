#include <stdio.h>

int main() {
    int n, x;
    int totalSum = 0;
    int leftSum = 0;
    int pivot = -1;

    // Take input from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Step 1: Calculate the total sum from 1 to n
    for (int i = 1; i <= n; i++) {
        totalSum += i;
    }

    // Step 2: Check each number x from 1 to n
    for (x = 1; x <= n; x++) {
        // Sum of elements from 1 to x
        leftSum += x; 
        
        // Sum of elements from x to n (includes x)
        int rightSum = totalSum - leftSum + x; 

        // If both sums match, we found the pivot
        if (leftSum == rightSum) {
            pivot = x;
            break; // Exit the loop since there is at most one pivot
        }
    }

    // Print the result
    printf("%d\n", pivot);

    return 0;
}
