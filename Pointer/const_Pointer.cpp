#include <iostream>
using namespace std;
int main()
{       
    int a = 10;
    int b = 20;
    //常量指针
    const int *p = &a;
    p = &b;
    //*p = 100; 错误

    //指针常量
    int * const p2 = &a;
    //p2 = &b;错误
    *p2 = 100;

    //双常量指针
    const int * const p3 = &a;
    //p3 = &b;
    //*p3 = 200;
    return 0; 
}