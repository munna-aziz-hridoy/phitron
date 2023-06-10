#include <stdio.h>
int main()
{
    int i, n, sum;
    scanf("%d", &n);

    sum = 0;

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    };

    printf("Sum of 1 to %d is: %d", n, sum);

    return 0;
}