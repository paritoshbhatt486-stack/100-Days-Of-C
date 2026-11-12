#include <stdio.h>

int main()
{
    long long n;
    int digit, i, count, maxCount = 0, result = 0;
    int freq[10] = {0};

    scanf("%lld", &n);

    if(n < 0)
        n = -n;

    if(n == 0)
        freq[0] = 1;

    while(n > 0)
    {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(freq[i] > maxCount)
        {
            maxCount = freq[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}