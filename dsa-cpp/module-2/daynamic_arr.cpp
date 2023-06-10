#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int *new_arr = new int[n + 2];

    for (int i = n - 1; i >= 0; i--)
    {
        new_arr[i] = arr[i];
    }

    new_arr[n] = 5;
    new_arr[n + 1] = 0;

    for (int i = n + 1; i >= 0; i--)
    {
        cout << new_arr[i] << " ";
    }

    return 0;
}