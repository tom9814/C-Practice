#include <iostream>
using namespace std;

class Person
{
friend ostream& operator<<(ostream &cout, Person &p);

public:
    Person(int a, int b)
    {
        m_A = a;
        m_B = b;
    }

private:
    int m_A;
    int m_B;
};

//全局函数重载<<
ostream& operator<<(ostream &cout, Person &p)
{
    cout << "p.m_A = " << p.m_A << " p.m_B = " << p.m_B;
    return cout;
}

void test01()
{
    Person p(10,20);
    cout << p << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}