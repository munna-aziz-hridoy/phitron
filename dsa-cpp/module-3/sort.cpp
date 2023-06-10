#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[6] = {6,
                  2,
                  4,
                  1,
                  3,
                  5};

    sort(arr, arr + 6, greater<int>());

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}