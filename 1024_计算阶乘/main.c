#include <stdio.h>
#include <stdlib.h>

double factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int num;
    scanf("%d", &num);
    //printf("%lld\n", factorial(num));
    printf("%.0lf\n", factorial(num));
    return 0;
}
