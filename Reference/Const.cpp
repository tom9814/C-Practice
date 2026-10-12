#include <iostream>
#include <windows.h>
using namespace std;

//常数应用作为形参防止实参被改变
void showvalue(const int &a)
{
    cout << "a = " << a << endl;
}

int main()
{
    const int &ref = 100;
    cout << "ref = " << ref << endl;

    int a = 100;
    showvalue(a);

    system("pause");
    return 0;
}