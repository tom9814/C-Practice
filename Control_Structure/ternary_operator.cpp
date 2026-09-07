#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    int c;
    a > b ? a : b = 100;
    c = a > b ? a : b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}