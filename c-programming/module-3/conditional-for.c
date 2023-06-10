#include <stdio.h>
int main()
{

    int i;

    for (i = 1; i <= 10; i++)
    {
        if (i == 5 || i == 7)
        {
            printf("I'm exceptional\n");
        }
        else
        {
            printf("I'm ordinary\n");
        }
    }

    return 0;
}