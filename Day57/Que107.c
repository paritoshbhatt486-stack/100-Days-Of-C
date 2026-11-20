#include <stdio.h>

int main()
{
    int n, i, j, prevGreater;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        prevGreater = -1;

        for(j = i - 1; j >= 0; j--)
        {
            if(arr[j] > arr[i])
            {
                prevGreater = arr[j];
                break;
            }
        }

        if(i == n - 1)
            printf("%d", prevGreater);
        else
            printf("%d, ", prevGreater);
    }

    return 0;
}