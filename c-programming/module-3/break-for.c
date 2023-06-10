#include <stdio.h>
int main()
{

    int i;

    for (i = 0; i <= 200; i++)
    {

        printf("I'm inside a loop: %d\n", i);

        if (i == 5)
        {
            break;
        }
    };

    return 0;
}