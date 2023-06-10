#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= 5; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
};