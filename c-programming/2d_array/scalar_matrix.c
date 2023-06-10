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
    }

    int flag = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {

                if (arr[0][0] != arr[i][j])
                {
                    flag = 0;
                }
                continue;
            }

            if (arr[i][j] != 0)
            {

                flag = 0;
            }
        }
    }

    printf("%d", flag);

    return 0;
};