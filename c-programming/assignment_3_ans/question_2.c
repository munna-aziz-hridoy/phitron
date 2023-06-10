#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int s = n - 1, t = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= t; k++)
        {
            printf("%d", t);
        }

        s--;
        t++;

        printf("\n");
    }

    return 0;
};