#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef int bool;
#define true (1)
#define false (0)

bool is_inUnitCircle(double x, double y)
{
    double dis = x*x + y*y - 1;
    if (fabs(dis) < 0.001)
    {
        return true;
    }
    return false;
}

int main()
{
    double x, y;
    scanf("%lf%lf", &x, &y);
    if (is_inUnitCircle(x, y))
    {
        printf("Y\n");
    }
    else
    {
        printf("N\n");
    }
    return 0;
}
