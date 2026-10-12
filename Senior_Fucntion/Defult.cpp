#include <iostream>
#include <windows.h>
using namespace std;

//默认值的后面也必须要有默认值
//函数声明和函数实现只能有一个又默认值

int func01(int a, int b = 20, int c = 30)
{
    return a + b + c;
}

int func02(int a, int b = 30, int c = 50);

int func02(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << func01(10) << endl;
    cout << func02(20) << endl;

    system("pause");
    return 0;
}