#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][n];

    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (arr[i][j] != 0)
                {
                    flag = 0;
                }
            }
            else if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
};