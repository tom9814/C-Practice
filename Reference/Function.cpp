#include <iostream>
#include <windows.h>
using namespace std;

//值传递
void Myswap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

//地址传递
void Myswap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//引用传递
void Myswap3(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    //Myswap1(a,b);
    //Myswap2(&a, &b);
    Myswap3(a,b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    system("pause");
    return 0;
}