#include <stdio.h>

int main()
{
    int m, n, i = 0, j = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int nums1[m];

    printf("Enter elements of first sorted array: ");
    for(int k = 0; k < m; k++)
    {
        scanf("%d", &nums1[k]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int nums2[n];

    printf("Enter elements of second sorted array: ");
    for(int k = 0; k < n; k++)
    {
        scanf("%d", &nums2[k]);
    }

    while(i < m && j < n)
    {
        if(nums1[i] <= nums2[j])
        {
            printf("%d ", nums1[i]);
            i++;
        }
        else
        {
            printf("%d ", nums2[j]);
            j++;
        }
    }

    while(i < m)
    {
        printf("%d ", nums1[i]);
        i++;
    }

    while(j < n)
    {
        printf("%d ", nums2[j]);
        j++;
    }

    return 0;
}