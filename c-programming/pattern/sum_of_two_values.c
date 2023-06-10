#include <stdio.h>
int main()
{

    int n, x;

    scanf("%d %d", &n, &x);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = a[i] + a[j];
            if (sum == x)
            {
                return printf("Sum of index %d and %d is: %d", i, j, x);
            }
        }
    }

    printf("There is no match");

    return 0;
};