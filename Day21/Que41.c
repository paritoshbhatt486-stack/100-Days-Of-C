#include <stdio.h>

int main()
{
    int n, first, last, temp, digits = 0, divisor = 1;

    scanf("%d", &n);

    last = n % 10;
    temp = n;

    while(temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }

    first = temp;

    for(int i = 0; i < digits; i++)
    {
        divisor = divisor * 10;
    }

    n = n - (first * divisor) - last;
    n = n + (last * divisor) + first;

    printf("%d", n);

    return 0;
}