#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int score = 0;
    cout << "What's your score?" << endl;
    cin >> score;
    cout << "Your score is:" << score << endl;
    if(score > 600)
    {
        cout << "一本等你" << endl;
    }
    else
    {
        cout << "You missed 一本" << endl;
    }
    return 0;
}