#include <iostream>
#include <windows.h>
using namespace std;
class Person
{
public:
    Person()
    {
        cout << "默认构造函数的调用" << endl;
    }

    Person(int age)
    {
        m_age = age;
        cout << "有参构造函数的调用" << endl;
    }

    Person(const Person &p)
    {
        m_age = p.m_age;
        cout << "拷贝构造函数的调用" << endl;
    }

    ~Person()
    {
        cout << "析构函数的调用" << endl;
    }

    int m_age;
};

// 帮助初始化对象时会调用析构函数
void test01()
{
    Person p1(10);
    Person p2(p1);
    cout << "p2的年龄是: " << p2.m_age << endl;
}

// 值传递的时候作为参数传入
void DoWork(Person p)
{
}

void test02()
{
    Person p;
    DoWork(p);
}

// 值方式返回局部对象
Person dowork()
{
    Person p1;
    return p1;
}

void test03()
{
    Person p2 = dowork();
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // test01();
    // test02();
    test03();
    // test03()由于返回值优化没有执行拷贝构造函数

    system("pause");
    return 0;
}