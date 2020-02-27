#include <stdio.h>
#include <stdlib.h>

int getfigure(int num)
{
    int i = 1;
    while (num / 10 > 0)
    {
        i++;
        num /= 10;
    }
    return i;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", getfigure(num));
    return 0;
}
