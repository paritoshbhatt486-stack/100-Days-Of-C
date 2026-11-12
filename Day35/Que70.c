#include <stdio.h>

int main()
{
    int n, i, k, a[100], temp[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    k = k % n;

    for(i = 0; i < n; i++)
    {
        temp[(i + k) % n] = a[i];
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }

    return 0;
}