#include <stdio.h>

typedef int Bool;
#define TRUE 1
#define FALSE 0


typedef struct _Fibonacci
{
    int length;
    int num1;
    int num2;
    int index;
}Fibonacci;

void init(Fibonacci* fib, int len)
{
    fib->length = len;
    fib->num1 = 0;
    fib->num2 = 1;
    fib->index = 0;
}

Bool isEnd(Fibonacci* fib)
{
    if (fib->index >= fib->length)
    {
        return TRUE;
    }
    return FALSE;
}

int getCurNum(Fibonacci* fib)
{
    int ret = fib->num1;
    fib->num1 = fib->num2;
    fib->num2 = fib->num2 + ret;
    fib->index++;
    return ret;
}


int main()
{
    int len = 0;
    Fibonacci fib;
    scanf("%d", &len);

    init(&fib, len + 1);
    getCurNum(&fib);

    while (!isEnd(&fib))
    {
        printf("%d ", getCurNum(&fib));
    }

	return 0;
}
