#include <stdio.h>
int main()
{
    int n, s, t;

    scanf("%d", &n);

    s = n - 1;
    t = 1;

    for (int i = 1; i <= (2 * n) - 1; i++)
    {

        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= t; k++)
        {
            printf("*");
        }

        if (i < n)
        {
            s--;
            t += 2;
        }
        else
        {
            s++;
            t -= 2;
        }

        if (i < (2 * n) - 1)
        {
            printf("\n");
        }
    }

    return 0;
};