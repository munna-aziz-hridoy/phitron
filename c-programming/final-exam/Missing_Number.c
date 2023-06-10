#include <stdio.h>

void missing_number()
{
    int s, a, b, c, d;

    scanf("%d %d %d %d", &s, &a, &b, &c);

    d = s - (a + b + c);

    printf("%d", d);
}

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        missing_number();

        if (i < n)
        {
            printf("\n");
        }
    }

    return 0;
};