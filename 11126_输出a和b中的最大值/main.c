#include <stdio.h>
#include <stdlib.h>

int theGreater(int a, int b)
{
    return (a > b) ? (a) : (b);
}

int main()
{
    int a = 0;
    int b = 0;

    scanf("%d%d", &a, &a);
    printf("%d\n", theGreater(a, b));

    return 0;
}
