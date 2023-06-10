#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int i = 0, j = n - 1;

    while (i < j)
    {
        int temp = arr[i];

        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
};

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int arr[n];
//     int arr2[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = n - 1; i >= 0; i--)
//     {

//         arr2[(n - 1) - i] = arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr2[i]);
//     }

//     return 0;
// };