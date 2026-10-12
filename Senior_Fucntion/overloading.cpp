#include <iostream>
#include <windows.h>
using namespace std;

void func()
{
    cout << "func()" << endl;
}

void func(int a)
{
    cout << "func(int a)" << endl;
}

void func(double a)
{
    cout << "func(double a)" << endl;
}

int main()
{
    // func();
    // func(10);
    func(3.14);

    system("pause");
    return 0;
}