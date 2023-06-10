#include <stdio.h>
int main()
{
    int m1, m2, d1;

    float d2;

    scanf("%d %d %d", &m1, &m2, &d1);

    d2 = (m1 * d1) / (float)m2;

    int total;

    total = (int)d2;

    printf("%d\n", total);

    return 0;
};