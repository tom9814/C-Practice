#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int a = 10;
    int &b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    b = 200;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    system("pause");
    return 0;
}