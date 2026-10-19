#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//手机类
class Phone
{
public:
    Phone(string pname):m_Pname(pname)
    {
        cout << "Phone的构造函数的调用" << endl;
    }

    ~Phone()
    {
        cout << "Phone的析构函数的调用" << endl;
    }

    string m_Pname;
};

//人类
class Person
{
public:
    Person(string name, string pname):m_Name(name),m_Phone(pname)
    {
        cout << "Person的构造函数的调用" << endl;
    }

    ~Person()
    {
        cout << "Person的析构函数的调用" << endl;
    }

    string m_Name;
    Phone m_Phone;
};

void test01()
{
    Person p("潘俊成","小米14promax");
    cout << p.m_Name << "拿着" << p.m_Phone.m_Pname << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    system("pause");
    return 0;
}