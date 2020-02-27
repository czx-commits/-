#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

typedef struct _series
{
    int preNum;
    int curNum;
}Fabi;

void init(Fabi* fabi)
{
    fabi->curNum = 1;
    fabi->preNum = 0;
}

int getNextTerm(Fabi* fabi)
{
    int tmp = fabi->curNum;
    fabi->curNum += fabi->preNum;
    fabi->preNum = tmp;
    return fabi->curNum;
}

int sum(Fabi* fabi, int n)
{
    int  sumNum = 0;
    int i = 0;

    for (i = 0; i < n; i++)
    {
        sumNum += getNextTerm(fabi);
    }
    return sumNum;
}


int main()
{
    Fabi fabi;
    int n;

    scanf("%d", &n);

    init(&fabi);
    printf("%d\n", sum(&fabi, n));



    return 0;
}

/*
#include <iostream>

using namespace std;

int main()
{

    return 0;
}
*/
