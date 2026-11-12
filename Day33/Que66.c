#include <stdio.h>

int main()
{
    int n, i, a[100], element, j;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &element);

    i = n - 1;

    while(i >= 0 && a[i] > element)
    {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = element;
    n++;

    for(j = 0; j < n; j++)
    {
        printf("%d ", a[j]);
    }

    return 0;
}