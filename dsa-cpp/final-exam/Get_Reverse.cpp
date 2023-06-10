#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string nm;
    int cls;
    char s;
    int math_marks;
    int eng_marks;
};

int main()
{
    int n;

    cin >> n;
    cin.ignore();

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].math_marks >> students[i].eng_marks;
        cin.ignore();
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}