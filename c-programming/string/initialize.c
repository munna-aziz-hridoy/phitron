#include <stdio.h>
int main()
{
    char a[5] = "munna";

    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", a[i]);
    }

    printf("%s", a);

    return 0;
};