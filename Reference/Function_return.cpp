#include <iostream>
#include <windows.h>
using namespace std;

//返回全局变量
int& test01()
{
    static int a = 10;
    return a;
}

int main()
{
    int &ref = test01();
    cout << "ref = " << ref << endl;  
    cout << "ref = " << ref << endl; 

    test01() = 1000;  //函数可以作为等号左边的左值使用
    cout << "ref = " << ref << endl; 
    cout << "ref = " << ref << endl; 
    
    system("pause");
    return 0;
}