#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    char buf[1024];
    int len;

    scanf("%s", buf);
    len = strlen(buf);

    lower(buf, len);
    printf("%s\n", buf);

    return 0;
}
