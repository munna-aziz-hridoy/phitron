#include <stdio.h>
int main()
{
    int n, mlt;
    scanf("%d", &n);

    for (int i = 1; i <= 12; i++)
    {
        mlt = n * i;
        printf("%d * %d = %d\n", n, i, mlt);
    }

    return 0;
};