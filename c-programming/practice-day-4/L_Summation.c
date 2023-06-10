#include <stdio.h>

int summation(int n, int arr[])
{
    if (n == 0)
    {
        return 0;
    }

    int s = summation(n - 1, arr);

    int sum = arr[n - 1] + s;

    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = summation(n, arr);

    printf("%d", sum);

    return 0;
};