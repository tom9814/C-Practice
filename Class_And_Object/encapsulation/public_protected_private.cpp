#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Person
{
public:
    string m_name;

protected:
    string m_car;

private:
    string m_password;

public:
    void fun()
    {
        m_name = "潘俊成";
        m_car = "宝马";
        m_password = "123456";
    }
};

int main()
{
    Person p1;
    p1.m_name = "杨楚昊";
    // p1.m_car = "理想";
    // p1.m_password = "157233";

    system("pause");
    return 0;
}