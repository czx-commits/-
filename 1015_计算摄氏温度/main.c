#include <stdio.h>
#include <stdlib.h>

double F2C(double F)
{
    return 5*(F-32)/9;
}

int main()
{
    double F;
    scanf("%lf", &F);
    printf("%.2f\n", F2C(F));
    return 0;
}
