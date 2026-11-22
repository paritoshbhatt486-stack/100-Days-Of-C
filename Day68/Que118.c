#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    int sum = 0;

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    int expectedSum = n * (n + 1) / 2;
    int missingNumber = expectedSum - sum;

    printf("%d", missingNumber);

    return 0;
}