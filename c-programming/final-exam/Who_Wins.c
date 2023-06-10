#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    int tw = 0, pw = 0;

    for (int i = 0; i < n; i++)
    {
        int x1, x2;

        scanf("%d %d", &x1, &x2);

        if (x1 > x2)
        {
            tw++;
        }
        else if (x1 < x2)
        {
            pw++;
        }
    }

    if (tw > pw)
    {
        printf("Tiger");
    }
    else if (tw < pw)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }

    return 0;
};