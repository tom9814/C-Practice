#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int score;
    cout << "评个分：" << endl;
    cin >> score;
    cout << "你的评分为" << score << endl;
    switch (score)
    {
    case 10:
        cout << "你觉得这电影牛逼" << endl;
        break;
    case 9:
        cout << "你觉得这电影牛逼" << endl;
        break;
    case 8:
        cout << "你觉得这电影有点牛逼" << endl;
        break;
    case 7:
        cout << "你觉得这电影有点牛逼" << endl;
        break;
    case 6:
        cout << "你觉得这电影一般" << endl;
        break;
    case 5:
        cout << "你觉得这电影一般" << endl;
        break;
    default:
        cout << "a piece of shit" << endl;
        break;
    }
    return 0;
}