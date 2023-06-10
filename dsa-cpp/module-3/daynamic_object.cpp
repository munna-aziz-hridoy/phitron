#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    int roll;
    char name[100];
    int age;
    int marks;
    int standard;
    char section;

    Student(int r, char n[], int a, int m, int s, char ss)
    {
        roll = r;
        strcpy(name, n);
        age = a;
        marks = m;
        standard = s;
        section = ss;
    }
};

int main()
{

    char rn[] = "Rahul";

    Student *rahul = new Student(9, rn, 20, 100, 1, 'A');

    cout << (*rahul).roll << endl;

    delete rahul;

    cout << rahul->roll << endl;

    return 0;
}