#include <stdio.h>

int isSXH(int num)
{
    int a = num/100;
    int b = (num/10)%10;
    int c = num %10;
    if (a*a*a + b*b*b + c*c*c == num)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int i = 0;
    for (i = 100; i < 999; ++i)
    {
        if (isSXH(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
