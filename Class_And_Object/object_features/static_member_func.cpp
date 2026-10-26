#include <iostream>
#include <windows.h>
using namespace std;

class Person
{
public:
    static void func()
    {
        m_A = 200;
        // m_B = 100;
        cout << "static void func的调用" << endl;
    }

    static int m_A;
    int m_B;
};

int Person::m_A = 100;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    cout << Person::m_A << endl;
    //类名访问
    Person::func();
    //对象访问
    Person p;
    p.func();
    cout << Person::m_A << endl;

    system("pause");
    return 0;
}