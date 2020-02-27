#include <stdio.h>
#include <stdlib.h>

typedef int bool;
#define true (1)
#define false (0)

bool isSquares(int num)
{
    int i;
    for (i = 0; i < num; i++)
    {
        if (i * i == num)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int num;
    scanf("%d", &num);
    if (isSquares(num))
    {
        printf("Y\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}
