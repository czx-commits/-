#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    float d=15, e, f;
    a = 35%7; // a = 0
    b = 15/10; // b = 1
    c = b++; // c = 1, b = 2
    e = 15/10; // e = 1
    f = d/10; // f = 1.5

    printf("%d,%d,%d,%f,%f,%f\n", a, b, c, d, e, f);
    // 0,2,1,15.000000,1.000000,1.500000

    return 0;
}
