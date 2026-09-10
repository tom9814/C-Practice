#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    srand((unsigned int)time(NULL));
    int num = rand() % 100 + 1;
    int gusnum = 0;
    while (1)
    {
        cout << "猜一个数字吧" << endl;
        cin >> gusnum;
        if(gusnum > num)
        {
            cout << "猜大了" << endl;
        }
        else if (gusnum < num)
        {
            cout << "猜小了" <<endl;
        }
        else
        {
            cout << "猜对了" << endl;
            break;
        }
    }
    return 0;
}