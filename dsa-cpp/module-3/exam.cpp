#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    char name[100];
    float height;
    int age;

    Person(char *n, float h, int a)
    {
        strcpy(name, n);
        height = h;
        age = a;
    }
};

int main()
{

    Person *munna = new Person("Munna", 5.8, 24);

    Person *sakib = new Person("Sakib", 5.8, 17);

    if (munna->age > sakib->age)
    {
        cout << munna->name << endl;
    }
    else
    {
        cout << sakib->name << endl;
    }

    return 0;
}