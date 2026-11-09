 #include <stdio.h>
#include <math.h>

int main()
{
    int n, original, remainder, digits = 0;
    int sum = 0;

    scanf("%d", &n);

    original = n;

    int temp = n;

    while(temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while(temp != 0)
    {
        remainder = temp % 10;
        sum = sum + pow(remainder, digits);
        temp = temp / 10;
    }

    if(sum == original)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}