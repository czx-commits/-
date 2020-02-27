#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 0;
    int b = 0;

    scanf("%d%d", &a, &b);

    printf("%d\n", sum(a, b));

    return 0;
}
