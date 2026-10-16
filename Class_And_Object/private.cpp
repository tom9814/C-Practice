#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Person
{
public:
    //设置姓名
    void setName(string name)
    {
        m_name = name;
    }

    //读取姓名
    string getName()
    {
        return m_name;
    }

    //设置年龄
    void setAge(int age)
    {
        if (age < 0 || age > 150)
        {
            cout << "你输入的年龄" << age << "有误" << endl;
            return;
        }
        m_age = age;
    }

    //获取年龄
    int getAge()
    {
        return m_age;
    }

    //设置偶像
    void setIdol(string idol)
    {
        m_idol = idol;
    }

private:
    string m_name;   //可读可写
    int m_age = 18;       //可读可写, 0 <= m_age <= 150
    string m_idol;   //只可写
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Person p1;
    p1.setName("潘俊成");
    cout << "姓名: " << p1.getName() << endl;
    p1.setAge(160);
    cout << "年龄: " << p1.getAge() << endl;
    p1.setIdol("匡超");

    system("pause");
    return 0;
}