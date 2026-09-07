#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int score = 0;
    cout << "输入你的成绩" << endl;
    cin >> score;
    cout << "你的成绩是" << score << endl;
    if (score > 600)
    {
        cout << "考上一本了你" << endl;
    }
    system("pause");
    return 0;
}