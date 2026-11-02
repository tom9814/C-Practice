#include <iostream>
#include <windows.h>
using namespace std;

class Person
{
public:
    Person() : m_A(0), m_B(0)
    {

    }
    //const修饰函数后，函数变为常函数，常函数里不可改变对象变量的值
    void change() const
    {
        //m_A = 100;
        m_B = 100;
    }

    void func()
    {

    }

    int m_A;
    mutable int m_B;//如果想在常函数里改变对象变量的值，定义对象前要加mutable
};

void test01()
{
    Person p;
    p.change();
}

void test02()
{
    //常对象,常对象的变量的值不能改变,且只能调用常函数
    const Person p;
    // p.m_A = 100;
    p.m_B = 100;
    p.change();
    // p.func();
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}