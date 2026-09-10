#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    for (int num = 1; num <= 100; num++)
    {
        if (num % 10 == 7 || num % 100 / 10 == 7 || num % 7 == 0)
        {
            cout << "敲桌子" << endl;
        }
        else
        {
            cout << num << endl;
        }
    }
    return 0;
}