#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int arr[2][3] = 
    {
        {1,2,3},
        {4,5,6}
    };
    cout << "整个二维数组占用空间" << sizeof(arr) << endl;
    cout << "二维数组一行所占空间" << sizeof(arr[0]) << endl;
    cout << "二维数据第一个元素所占空间" << sizeof(arr[0][0]) << endl;
    cout << "二维数组行数" << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "二维数组列数" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
    cout << "二维数组首地址" << arr << endl;
    return 0;
}