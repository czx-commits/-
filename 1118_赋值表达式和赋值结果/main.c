#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    int b, c;
    char d, e;
    a = 3.5; // a = 3.5
    b = a; // b = 3;
    c = 330; // c = 330
    d = c; // d = (330 - 127 - 127) = 76;  A = 65
    e = '\141'; // °Ë½øÖÆ a = 0141(97)

    printf("%f,%d,%d,%c,%c", a,b,c,d,e);
    // 3.500000,3,330,J,a

    return 0;
}
