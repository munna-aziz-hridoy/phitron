#include <stdio.h>

int main()
{
    int budget;
    scanf("%d", &budget);

    if (budget >= 5000)
    {
        printf("We will go to Cox's Bazar");
        if (budget >= 10000)
        {
            printf("\nWe will go seint martin from cox");
        }
        else
        {
            printf("\nWe will return from cox");
        }
    }
    else
    {
        printf("We won't go for a tour");
    }

    return 0;
}