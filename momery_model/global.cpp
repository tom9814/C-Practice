#include <iostream>
#include <windows.h>
using namespace std;

//全局变量
int g_a = 10;
int g_b = 10;

//全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{   
    SetConsoleOutputCP(CP_UTF8);
    //局部变量
    int l_a = 10;
    int l_b = 10;
    cout << "局部变量l_a的地址为:" << dec << reinterpret_cast<uintptr_t>(&l_a) << endl;
    cout << "局部变量l_b的地址为:" << dec << reinterpret_cast<uintptr_t>(&l_b) << endl;

    cout << "全局变量g_a的地址为:" << dec << reinterpret_cast<uintptr_t>(&g_a) << endl;
    cout << "全局变量g_b的地址为:" << dec << reinterpret_cast<uintptr_t>(&g_b) << endl;

    //静态变量
    static int s_a = 10;
    static int s_b = 10;
    cout << "静态变量s_a的地址为:" << dec << reinterpret_cast<uintptr_t>(&s_a) << endl;
    cout << "静态变量s_b的地址为:" << dec << reinterpret_cast<uintptr_t>(&s_b) << endl;

    //字符串常量
    cout << "字符串常量的地址为:" << dec << reinterpret_cast<uintptr_t>(&"hello world") << endl;

    //局部常量
    const int c_l_a = 10;
    const int c_l_b = 10;
    cout << "局部常量c_l_a的地址为:" << dec << reinterpret_cast<uintptr_t>(&c_l_a) << endl;
    cout << "局部常量c_l_b的地址为:" << dec << reinterpret_cast<uintptr_t>(&c_l_b) << endl;

    cout << "全局常量c_g_a的地址为:" << dec << reinterpret_cast<uintptr_t>(&c_g_a) << endl;
    cout << "全局常量c_g_b的地址为:" << dec << reinterpret_cast<uintptr_t>(&c_g_b) << endl;

    system("pause");
    return 0;
}