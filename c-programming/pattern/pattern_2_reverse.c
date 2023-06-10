#include <stdio.h>
int main()
{

    int n, s = 0, t;
    scanf("%d", &n);

    t = (2 * n) - 1;

    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= s; k++)
        {
            printf(" ");
        }

        for (int j = t; j >= 1; j--)
        {
            printf("*");
        }

              if (i != n)
        {
            printf("\n");
        }

        t -= 2;
        s++;
    }

    return 0;
};