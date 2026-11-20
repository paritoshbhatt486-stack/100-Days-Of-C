#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    // Read array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int majority = -1; // Default to -1 if no majority element is found
    
    // Check the frequency of each element
    for (int i = 0; i < n; i++) {
        int count = 0;
        
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        
        // Check if count is strictly greater than n / 2
        if (count > n / 2) {
            majority = nums[i];
            break; // Exit loop once found
        }
    }
    
    // Print the result
    printf("%d\n", majority);
    
    return 0;
}
