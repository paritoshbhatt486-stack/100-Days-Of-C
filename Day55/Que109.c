#include <stdio.h>

int main()
{
    int n, k, i, j;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    int maxSum = 0, sum;

    for(i = 0; i <= n - k; i++)
    {
        sum = 0;

        for(j = i; j < i + k; j++)
        {
            sum += arr[j];
        }

        if(i == 0 || sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("Maximum Sum = %d", maxSum);

    return 0;
}