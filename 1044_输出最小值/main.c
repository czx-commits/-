#include <stdio.h>
#include <stdlib.h>

int min(int arr[], int n)
{
    int minNum = arr[0];
    int i;
    for (i = 1; i < n; i++)
    {
        minNum = (minNum < arr[i]) ? (minNum) : (arr[i]);
    }
    return minNum;
}

int main()
{
    const int n = 10;
    int arr[n];
    int i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", min(arr, n));

    return 0;
}
