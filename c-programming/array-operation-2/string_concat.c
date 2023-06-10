#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int x = strlen(a);

    for (int i = 0; i <= strlen(b); i++)
    {

        a[i + x] = b[i];
    }

    printf("%s", a);

    return 0;
};