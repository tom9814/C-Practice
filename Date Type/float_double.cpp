#include <iostream>
using namespace std;
int main()
{
    float f1 = 3.141323f;
    double d1 = 3.141323;
    cout << "f1 = " << f1 << endl;
    cout << "d1 = " << d1 << endl;
    cout << "float占" << sizeof(float) << "字节" << endl;
    cout << "double占" << sizeof(double) << "字节" << endl;
    float f2 = 3e2;
    float f3 = 3e-2;
    cout << "f2 = " << f2 << endl;
    cout << "f3 = " << f3 << endl;
    return 0;
}