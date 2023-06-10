#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool compare(Student a, Student b)
{
    int a_total_mark = a.eng_marks + a.math_marks;
    int b_total_mark = b.eng_marks + b.math_marks;

    if (a_total_mark > b_total_mark)
    {
        return true;
    }
    else if (a_total_mark == b_total_mark)
    {
        if (a.id < b.id)
            return true;
        else
            return false;
    }
    else
        return false;
}

int main()
{

    int n;

    cin >> n;
    cin.ignore();

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
        cin.ignore();
    }

    sort(students, students + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}