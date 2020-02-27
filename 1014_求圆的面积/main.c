#include <stdio.h>
#include <stdlib.h>

#define PI (3.14159)

double areaOfCircle(double rad)
{
    return PI * rad * rad;
}


int main()
{
    double rad;
    scanf("%lf", &rad);
    printf("%.2f\n", areaOfCircle(rad));

    //printf("%6.2f\n", areaOfCircle(rad));
    return 0;
}
