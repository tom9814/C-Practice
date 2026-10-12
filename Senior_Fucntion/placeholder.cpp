#include <iostream>
#include <windows.h>
using namespace std;

void func01(int a, int)
{
    cout << "Fuck you" << endl;
}

int main()
{
    func01(10,10);

    system("pause");
    return 0;
}