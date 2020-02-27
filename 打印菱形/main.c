#include <stdio.h>
#include <stdlib.h>

void printLine(const int preKG, const int num, const int midKG)
{

    int i = 0;
    for (i = 0; i < preKG; i++)
    {
        printf(" ");
    }

    printf("%d", num);

    if (num == 1)
    {
        printf("\n");
        return;
    }


    for (i = 0; i < midKG; ++i)
    {
        printf(" ");
    }

    printf("%d\n", num);
}



void printLX(const int n)
{
    const int top = (n % 2 == 0) ? (n / 2) : (n / 2 + 1);
    const int bottom = n / 2;
    int i = 1;

    // 打印上半部分
    for (i; i<= top; ++i)
    {
        printLine(top - i, i, 2*(i-1)-1);
    }

    // 打印下半部分
    for (i = bottom; i > 0; --i)
    {
        printLine(top - i, i, 2*(i-1)-1);
    }

}


int main()
{
    int n = 0;
    scanf("%d", &n);
    printLX(n);
    return 0;
}
