#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

int main()
{
    float a, b, c;
    char op;
    scanf("%f%c%f", &a, &op, &b);
    switch(op)
    {
        case '+': c = a + b; break;
        case '-': c = a - b; break;
        case '*': c = a * b; break;
        case '/': c = a / b; break;
        default: printf("error\n");break;
    }
    printf("result=%.2f\n", c);
    return 0;
}









/*
typedef int bool;
#define true (1)
#define false (0)


bool isOperator(char ch)
{
    if (
        ch == '+' ||
        ch == '-' ||
        ch == '*' ||
        ch == '/'
        )
    {
        return true;
    }
    return false;
}

double calculate(double left, double right, char operator)
{

    double result;

    if (operator == '+')
    {
        result = left + right;
    }
    else if (operator == '-')
    {
        result = left - right;
    }
    else if (operator == '*')
    {
        result = left * right;
    }
    else if (operator == '/')
    {
        result = left / right;
    }

    return result;
}

double getLeftNum(char line[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (isOperator(line[i]))
        {
            break;
        }
    }
    return strtod(line, NULL);
}

double getRightNUm(char line[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (isOperator(line[i]))
        {
            break;
        }
    }
    return strtod(line+i, NULL);
}

char getOperator(char line[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (isOperator(line[i]))
        {
            break;
        }
    }
    return line[i];
}


int main()
{
    const int n = 1024;
    char str[1024];
    double result;

    scanf("%s", str);
    result = calculate(getLeftNum(str, n),
                       getRightNUm(str, n),
                       getOperator(str, n));
    printf("result=%.2f\n", result);

    return 0;
}
*/
