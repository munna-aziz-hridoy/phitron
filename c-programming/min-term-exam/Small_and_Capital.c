#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];

    scanf("%s", a);

    int cap = 0,
        sml = 0;

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 65 && a[i] <= 91)
        {
            cap++;
        }
        else if (a[i] >= 97 && a[i] <= 123)
        {
            sml++;
        }
    }

    printf("%d %d", cap, sml);

    return 0;
};