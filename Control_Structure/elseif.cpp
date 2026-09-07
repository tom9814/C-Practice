#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int score;
    cout << "What's your score?" << endl;
    cin >> score;
    cout << "Your score is:" << score << endl;
    if(score > 600)
    {
        cout << "一本welcome" << endl;
        if(score > 700)
        {
            cout << "我靠北大" << endl;
        }
        else if(score > 650)
        {
            cout << "我靠清华"  << endl;
        }
        else
        {
            cout << "人大" << endl;
        }
    }
    else if(score > 500)
    {
        cout << "二本welcome" << endl;
    }
    else if(score > 400)
    {
        cout << "三本welcome" << endl;
    }
    else
    {
        cout << "You are a loser" << endl;
    }
    return 0;
}