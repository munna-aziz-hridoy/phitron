#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int s = n - 1, c = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < c; k++)
        {
            if (i % 2 == 0)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }

        printf("\n");
        s--;
        c += 2;
    }

    return 0;
};