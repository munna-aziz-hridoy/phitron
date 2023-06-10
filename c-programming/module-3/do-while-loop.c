#include <stdio.h>
int main()
{
    int i = 1;

    do
    {
        printf("Inside do while loop: %d\n", i);

        i++;

    } while (i <= 10);

    return 0;
}