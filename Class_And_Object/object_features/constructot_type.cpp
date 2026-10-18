#include <iostream>
#include <windows.h>
using namespace std;

class Person
{
public:
    //无参构造函数
    Person()
    {
        cout << "无参构造函数的调用" << endl;
    }

    //有参构造函数
    Person(int a)
    {
        age = a;
        cout << "有参构造函数的调用" << endl;
    }

    //拷贝构造函数
    Person(const Person &p)
    {
        age = p.age;
        cout << "拷贝函数的调用" << endl;
    }

    //析构函数
    ~Person()
    {
        cout << "析构函数的调用" << endl;
    }

    //年龄
    int age;
};

void test01()
{
    //括号法
    // Person p1;
    // Person p2(10);
    // Person p3(p2);
    // cout << "p3的年龄是: " << p3.age << endl;

    //显示法
    // Person p1;
    // Person p2 = Person(10);
    // Person p3 = Person(p2);
    // cout << "p3的年龄是: " << p3.age << endl;

    //隐式转换法
    Person p4 = 10;
    Person p5 = p4;
    cout << "p5的年龄是: " << p5.age << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    system("pause");
    return 0;
}