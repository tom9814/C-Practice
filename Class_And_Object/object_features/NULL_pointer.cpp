#include <iostream>
#include <windows.h>
using namespace std;

class Person
{
public:
    void showClassName()
    {
        cout << "this is Person class" << endl;
    }

    void showPersonAge()
    {
        cout << "age = " << m_age << endl;
    }

    int m_age;
};

int main()
{
    Person *p = NULL;
    p->showClassName();
    // p->showPersonAge();
    // showClassName可以执行，但showPersonAge无法执行

    system("pause");
    return 0;
}