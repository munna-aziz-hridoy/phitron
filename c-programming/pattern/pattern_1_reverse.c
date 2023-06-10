#include <stdio.h>
int main()
{

    int n, s, t = 1;
    scanf("%d", &n);
    s = n - 1;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = s; j >= 1; j--)
        {
            printf(" ");
        }

        for (int k = 1; k <= t; k++)
        {
            printf("*");
        }
        if (i != n)
        {
            printf("\n");
        }
        s--;
        t++;
    }

    return 0;
};