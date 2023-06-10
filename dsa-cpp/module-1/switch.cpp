#include <iostream>

using namespace std;

int main()
{

    int a;

    cin >> a;

    switch (a % 2)
    {
    case 0:
        cout << "Even";
        break;

    case !0:
        cout << "Odd";
        break;

    default:
        break;
    }

    return 0;
}