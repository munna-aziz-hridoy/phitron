#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;

    cin >> n;
    cin.ignore();

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id;
        cin.ignore();
    }

    int a = 0, b = n - 1;

    int m;

    if (n % 2 == 0)
    {
        m = n / 2;
    }
    else
    {
        m = (n - 1) / 2;
    }

    for (int i = 0; i < m; i++)
    {
        int temp = students[a].id;
        students[a].id = students[b].id;
        students[b].id = temp;

        a++;
        b--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << endl;
    }

    return 0;
}