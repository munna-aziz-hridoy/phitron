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

Student fun()
{
    char name[100] = "Munna Aziz";

    Student munna = Student(1, name, 20, 100, 10, 'A');

    return munna;
}

int main()
{

    Student m = fun();

    cout << m.roll << endl;

    return 0;
}