#include <stdio.h>

void print_even_indices(int n, int arr[])
{

    if (n < 0)
    {
        return;
    }

    if ((n - 1) % 2 == 0)
    {
        printf("%d ", arr[n - 1]);
    }

    print_even_indices(n - 1, arr);
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

    print_even_indices(n, arr);
    return 0;
};