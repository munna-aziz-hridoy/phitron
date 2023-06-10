#include <stdio.h>
int main()
{
    int i, n, sum, a;
    scanf("%d %d", &n, &a);

    sum = 0;

    for (i = 1; i <= n; i++)
    {
        if (i == a)
        {
            continue;
        }
        sum = sum + i;
    };

    printf("Sum of number 1 to %d is without %d: %d", n, a, sum);

    return 0;
}