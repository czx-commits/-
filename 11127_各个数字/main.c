#include <stdio.h>
#include <stdlib.h>

int hundredFigures(int num)
{
    return num / 100;
}

int singleFigures(int num)
{
    return num % 10;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", hundredFigures(num));
    printf("%d\n", singleFigures(num));
    return 0;
}
