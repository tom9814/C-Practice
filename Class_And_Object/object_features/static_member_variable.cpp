#include <iostream>
#include <windows.h>
using namespace std;

class Person
{
public:
    static int m_A;

private:
    static int m_B;
};

int Person::m_A = 100;
// int Person::m_B = 200;

int main()
{
    Person p;
    cout << p.m_A << endl;
    Person p2;
    p2.m_A = 200;
    cout << p.m_A << endl;

    // cout << Person::m_B << endl;

    system("pause");
    return 0;
}