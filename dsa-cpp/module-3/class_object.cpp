#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[500];
    int roll;
    int cls;
    char section;
};

int main()
{

    Student munna;
    Student karim;

    strcpy(munna.name, "Munna Aziz");
    munna.roll = 1;
    munna.cls = 3;
    munna.section = 'A';

    strcpy(karim.name, "Karim Ullah");
    karim.roll = 25;
    karim.cls = 2;
    karim.section = 'B';

    cout << munna.name << endl;

    return 0;
}