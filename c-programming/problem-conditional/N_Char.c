#include <stdio.h>
int main()
{
    char x;

    scanf("%c", &x);

    if (x >= 97 && x <= 122)
    {
        x = x - 32;
        printf("%c", x);
    }
    else
    {
        x += 32;
        printf("%c", x);
    }

    return 0;
};