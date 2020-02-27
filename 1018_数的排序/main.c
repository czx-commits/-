#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void input(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void output(int arr[], int n)
{
    char c = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (i >= n - 1)
        {
            c = '\n';
        }
        else
        {
            c = ',';
        }
        printf("%d%c", arr[i], c);
    }
}

int main()
{
    const int len = 3;
    int arr[len];

    input(arr, len);
    sort(arr, len);
    output(arr, len);


    return 0;
}
