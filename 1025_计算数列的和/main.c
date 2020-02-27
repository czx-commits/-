#include <stdio.h>
#include <stdlib.h>

typedef struct _series
{
    int preNum;
    int comDif;
    int firstTerm;
}ArithmeticPro;

void init(ArithmeticPro* arp, int firstTerm,int comDif)
{
    arp->comDif = comDif;
    arp->preNum = firstTerm - comDif;
    arp->firstTerm = firstTerm;
}

int getNextTerm(ArithmeticPro* arp)
{
    arp->preNum += arp->comDif;
    return arp->preNum;
}


int main()
{
    int firstNum = 1;
    int dif = 2;
    ArithmeticPro arp;
    int n;
    int i;

    init(&arp, firstNum, dif);

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%d\n", getNextTerm(&arp));
    }


    return 0;
}
