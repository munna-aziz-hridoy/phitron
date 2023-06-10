#include <stdio.h>

int main()
{

    int row, col;

    scanf("%d", &row);

    col = row;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    };

    // secondary diogonal

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if ((i + j) == row - 1)
            {
                continue;
            }

            if (arr[i][j] != 0)
            {
                return printf("Not a diogonal Matrix");
            }
        }
    }

    printf("Diogonal Matrix");

    // primary diogonal

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (i == j)
            {
                continue;
            }

            if (arr[i][j] != 0)
            {
                return printf("Not a diogonal Matrix");
            }
        }
    }

    printf("Diogonal Matrix");

    return 0;
};
