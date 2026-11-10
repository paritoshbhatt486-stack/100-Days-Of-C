#include <stdio.h>

int main()
{
    int n, remainder, sum = 0;

    scanf("%d", &n);

    while(n != 0)
    {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }

    printf("%d", sum);

    return 0;
}