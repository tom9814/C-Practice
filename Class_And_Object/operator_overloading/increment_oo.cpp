#include <iostream>
using namespace std;

class Myinteger
{
    friend ostream &operator<<(ostream &count, Myinteger m_int);
public:
    Myinteger()
    {
        m_num = 0;
    }

    //前置递增运算符重载
    Myinteger &operator++()
    {
        m_num++;
        return *(this);
    }

    //后置递增运算符重载
    Myinteger operator++(int)
    {
        Myinteger temp = *(this);
        m_num++;
        return temp;
    }

private:
    int m_num;
};

//<<运算符重载
ostream &operator<<(ostream &count, Myinteger m_int)
{
    count << "m_num = " << m_int.m_num;
    return count;
}

void test01()
{
    Myinteger M_int;
    cout << ++M_int << endl;
    cout << M_int << endl;
}

void test02()
{
    Myinteger myint;
    cout << myint++ << endl;
    cout << myint << endl;
}

int main()
{
    // test01();
    test02();

    system("pause");
    return 0;
}