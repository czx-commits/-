#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int char2int(char num)
{
    return num - 48;
}



int main()
{
    int len;
    char buf[1024];
    int i;
    int sum = 0;
    scanf("%s", buf);
    len = strlen(buf);

    for (i = 0; i < len; i++)
    {
        sum += char2int(buf[i]);
    }

    printf("%d\n", sum);

    return 0;
}
