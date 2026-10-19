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

    Person(int age, int height)
    {
        cout << "有参构造函数的调用" << endl;
        m_Age = age;
        m_Highet = new int(height);
    }

    Person(const Person &p)
    {
        cout << "拷贝构造函数的调用" << endl;
        m_Age = p.m_Age;
        m_Highet = new int (*p.m_Highet);
    }

    ~Person()
    {
        cout << "析构函数的调用" << endl;
        delete m_Highet;
        m_Highet = NULL;
    }

    int m_Age;
    int *m_Highet;
};

//如果使用默认的浅拷贝，程序会出错
void test01()
{
    Person p1(18, 175);
    cout << "p1的年龄为: " << p1.m_Age << "p1的身高为: " << *p1.m_Highet << endl;
    Person p2(p1);
    cout << "p2的年龄为: " << p2.m_Age << "p2的身高为: " << *p2.m_Highet << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    system("pause");
    return 0;

}