#include <stdio.h>

int main()
{
    int n, i, a[100];
    int largest, secondLargest;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = secondLargest = -999999;

    for(i = 0; i < n; i++)
    {
        if(a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] != largest)
        {
            secondLargest = a[i];
        }
    }

    printf("%d", secondLargest);

    return 0;
}