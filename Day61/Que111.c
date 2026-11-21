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

    for(i = 0; i <= n - k; i++)
    {
        int firstNegative = 0;

        for(j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                firstNegative = arr[j];
                break;
            }
        }

        printf("%d ", firstNegative);
    }

    return 0;
}