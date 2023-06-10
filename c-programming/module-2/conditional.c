#include <stdio.h>
#include <stdbool.h>

char *formatBool(int num);

int main()
{

    int a;

    scanf("%d", &a);

    if (a >= 100 && a < 500)
    {
        printf("I will eat chiness");
    }
    else if (a >= 500)
    {

        printf("I'm rich, I can buy whatever i want");
    }
    else if (a >= 50 && a < 100)
    {
        printf("Tea is my fav");
    }
    else
    {
        printf("I'm poor, can't eat burger");
    }

    return 0;
}

char *formatBool(int num)
{
    char *is_true = num != 0 ? "true" : "false";

    return is_true;
}