#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    getline(cin, s);

    stringstream ss(s);

    bool found = false;

    string wrd;
    while (ss >> wrd)
    {
        if (wrd == "Ratul")
        {

            found = true;
        }
    }

    if (found)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}