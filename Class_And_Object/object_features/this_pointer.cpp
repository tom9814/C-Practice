#include <iostream>
#include <windows.h>
using namespace std;

class Person
{
public:
    Person(int age)
    {
        //age = age;
        this->age = age;
    }

    // Person& PersonAddAge(Person &p)
    // {
    //     this->age += p.age;
    //     return *this;
    // }

    //拷贝赋值函数
    Person PersonAddAge(Person &p)
    {
        this->age += p.age;
        return *this;
    }

    int age;
};

void test01()
{
    Person p(10);
    Person p2(10);
    p.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2);
    cout << "age = " << p.age << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}