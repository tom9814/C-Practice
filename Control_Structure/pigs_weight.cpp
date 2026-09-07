#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int weight1, weight2, weight3;
    cout << "输入第一只小猪的体重" << endl;
    cin >> weight1;
    cout << "输入第二只小猪的体重" << endl;
    cin >> weight2;
    cout << "输入第三只小猪的体重" << endl;
    cin >> weight3;
    if(weight1 > weight2)
    {
        if(weight1 > weight3 )
        {
            cout << "第一只最重" << endl;
        }
        else
        {
            cout << "第三只最重" << endl;
        }
    }
    else
    {
        if(weight2 > weight3 )
        {
            cout << "第二只最重" << endl;
        }
        else
        {
            cout << "第三只最重" << endl;
        }
    }
    return 0;
}