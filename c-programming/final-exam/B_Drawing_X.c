#include <stdio.h>
int main()
{
    int size;

    scanf("%d", &size);

    int i, j;

    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)

        {

            if (i == (size + 1) / 2 && j == (size + 1) / 2)
            {
                printf("X");
            }

            else if (j == i)
            {
                printf("\\");
            }

            else if (j == (size - i + 1))
            {
                printf("/");
            }

            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}