#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d", &n);

    b = n % 10;
    a = n / 10;

    if (a > b && b != 0)
    {
        if (a % b == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else if (a < b && a != 0)
    {
        if (b % a == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("YES");
    }

    return 0;
};