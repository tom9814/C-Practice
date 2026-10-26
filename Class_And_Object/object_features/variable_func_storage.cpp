#include <iostream>
#include <windows.h>
using namespace std;

class Person
{
public:
    int m_A;

    static int m_B;

    void func(){}

    static void func02(){}
};

void test01()
{
    Person p;
    cout << "sizeof Person is " << sizeof(Person) << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}