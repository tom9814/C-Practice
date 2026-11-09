#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        m_name = name;
        m_age = age;
    }

    bool operator==(Person &p)
    {
        if (this->m_name == p.m_name && this->m_age == p.m_age)
        {
            return true;
        }
        return false;
    }

    string m_name;
    int m_age;
};

void test01()
{
    Person p1("Tom", 18);
    Person p2("Tom", 18);
    if (p1 == p2)
    {
        cout << "p1和p2是相等的" << endl;
    }
    else
    {
        cout << "p1和p2是不相等的" << endl;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    system("pause");
    return 0;
}