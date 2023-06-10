#include <iostream>
using namespace std;

int main()
{

    char s[100];

    // fgets(s, 100, stdin);

    cout << sizeof(s) << endl;

    cin.getline(s, sizeof(s));

    cout << sizeof(s) << endl;

    // cin >> s;
    cout << s;

    return 0;
}
