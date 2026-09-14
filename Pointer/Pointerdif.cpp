#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int a = 10;
    int *p = &a;
    cout << "a的地址为" << &a << endl;
    cout << "p的值为" << p << endl;
    a = 100;
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
    return 0;
}