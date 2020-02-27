#include <stdio.h>
#include <stdlib.h>

typedef int bool;
#define true (1)
#define false (0)

bool isUpper(char ch)
{
    if (ch >= 65 && ch <= 90)
    {
        return true;
    }
    return false;
}

void lowerChar(char* c)
{
    char tmp = *c;

    tmp += 32;

    *c = tmp;
}

void inputNoEndl(char buf[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%c", &buf[i]);
    }
}


void outputNoEndl(char buf[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%c", buf[i]);
    }
}

void lower(char buf[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (isUpper(buf[i]))
        {
            lowerChar(&buf[i]);
        }
    }
}

int main()
{
    const int n = 5;
    char buf[n];

    inputNoEndl(buf, n);
    lower(buf, n);
    outputNoEndl(buf, n);

    return 0;
}
