#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);

    if (x == 122)
    {
        printf("%c", 97);
    }
    else
    {
        printf("%c", x + 1);
    }

    return 0;
};