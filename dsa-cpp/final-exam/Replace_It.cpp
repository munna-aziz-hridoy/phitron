#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s, x;

        cin >> s >> x;

        int count = 0;

        for (int i = 0; i < s.length(); i++)

        {

            if (s[i] == x[0])
            {
                count = 1;
                for (int j = 1; j < x.length(); j++)
                {
                    if (s[i + j] == x[j])
                    {
                        count++;
                    }
                }
            }

            if (count == x.length())
            {
                s.replace(i, x.length(), "$");
                count = 0;
            }
        }

        cout << s << endl;
    }

    return 0;
}