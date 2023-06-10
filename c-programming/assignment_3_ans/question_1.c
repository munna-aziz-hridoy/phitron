#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int s = n - 1, t = 1;

    for (int i = 1; i < 2 * n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= t; k++)
        {
            printf("%d", k);
        }

        printf("\n");

        if (i < n)
        {
            t += 2;
            s--;
        }
        else
        {
            t -= 2;
            s++;
        }
    }

    return 0;
};