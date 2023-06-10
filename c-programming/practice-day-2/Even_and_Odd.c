#include <stdio.h>

int main()
{

    int n, evenSum = 0, oddSum = 0;
    int a;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        scanf("%d", &a);

        if (a % 2 == 0)
        {

            evenSum = evenSum + a;
        }
        else if (a % 2 != 0)
        {

            oddSum = oddSum + a;
        }
    }

    printf("%d %d", evenSum, oddSum);

    return 0;
}
