#include <iostream>
#include <windows.h>
using namespace std;

//1.创建一个类,C++编译器默认添加
//默认构造函数无参(空函数)
//默认析构函数无参(空函数)
//默认拷贝函数(值拷贝)

//定义有参构造函数，不提供默认无参构造函数,定义有拷贝构造函数，不提供任何函数

class Person
{
public:
    Person()
    {
        cout << "默认无参构造函数的调用" << endl;
    }

    Person(int age)
    {
        cout << "有参构造函数的调用" << endl;
        m_age = age;
    }

    // Person(const Person &p)
    // {
    //     cout << "拷贝构造函数的调用" << endl;
    //     m_age = p.m_age;
    // }

    ~Person()
    {
        cout << "析构函数的调用" << endl;
    }

int m_age;
};

void test01()
{
    Person p;
    p.m_age = 18;
    Person p1(p);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    system("pause");
    return 0;
}