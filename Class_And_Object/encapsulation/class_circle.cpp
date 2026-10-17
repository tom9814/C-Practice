#include <iostream>
#include <windows.h>
using namespace std;

const double PI = 3.14;

class Circle
{
public:
    int r;
    double culculateZC()
    {
        double ZC = 2 * r * PI;
        return ZC;
    }
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Circle c1;
    c1.r = 10;
    cout << "c1的周长为: " << c1.culculateZC() << endl;

    system("pause");
    return 0;
}