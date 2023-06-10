#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    string a = "Munna";
    cin >> s;

    string b = s + a;

    cout << s[2] << endl;
    cout << s.size() << endl;
    cout << s.substr(1, 3) << endl;
    cout << s.back() << endl;
    cout << s.front() << endl;

    cout << b;

    return 0;
}