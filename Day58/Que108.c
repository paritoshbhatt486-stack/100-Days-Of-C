#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    long long product;

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("[");

    for(i = 0; i < n; i++)
    {
        product = 1;

        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                product *= nums[j];
            }
        }

        if(i == n - 1)
            printf("%lld", product);
        else
            printf("%lld, ", product);
    }

    printf("]");

    return 0;
}