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

    Student aman(1, "Aman", 20, 100, 10, 'A');

    cout << aman.section;

    return 0;
}