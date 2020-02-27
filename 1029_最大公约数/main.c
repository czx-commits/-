#include <stdio.h>
#include <stdlib.h>

long commonDivissor(long m, long n)
{
    long min;
    long i;
    min = (m < n) ? (m) : (n);
    for (i = min; i >= 1; i--)
    {
        if (
            (m % i == 0) &&
            (n % i == 0)
            )
        {
            return i;
        }
    }
    return 1;
}


int main()
{
    long m, n;
    scanf("%ld,%ld", &m, &n);
    printf("%ld\n", commonDivissor(m, n));
    return 0;
}
