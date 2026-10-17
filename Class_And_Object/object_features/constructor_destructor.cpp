#include <iostream>
#include <windows.h>
using namespace std;

class Person
{
public:
//定义构造函数
    Person()
    {
        cout << "Person的构造函数的调用" << endl;
    }
//定义析构函数
    ~Person()
    {
        cout << "Person的析构函数的调用" << endl;
    }
};

void test01()
{
    Person P;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    // test01();
    Person P;

    system("pause");
    return 0;
}