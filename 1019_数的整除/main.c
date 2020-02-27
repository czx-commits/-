#include <stdio.h>
#include <stdlib.h>


void input(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void isDivBy(int arr[], int n, int num)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % num == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}


int main()
{
    const int n = 5;
    int arr[n];
    int num = 27;

    input(arr, n);
    isDivBy(arr, n, num);
    return 0;
}
