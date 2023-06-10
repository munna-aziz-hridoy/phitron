#include <stdio.h>

void print_arr(int *arr, int n, int x);

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    print_arr(arr, n, 0);

    return 0;
};

void print_arr(int *arr, int n, int x)
{

    if (n == x)
    {
        return;
    }

    printf("%d\n", arr[x]);

    print_arr(arr, n, x + 1);
}