#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "数组的地址是：" << arr << endl;
    cout << "数组第二个元素的地址是:" << &arr[1] <<endl;
    return 0;
}