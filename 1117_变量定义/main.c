#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float i, j;

    a = 5;
    b = 6;
    i = 3.14;
    j = i * a * b;
    printf("a=%d, b=%d, i=%f, j=%f\n", a, b, i, j);

    return 0;
}
