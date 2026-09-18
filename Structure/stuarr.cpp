#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
struct Student
{
    string name;
    int age;
    int score;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Student stuarr[3] =
    {
        {"潘俊成", 18, 100},
        {"杨楚昊", 19, 100},
        {"匡超", 20, 98}
    };
    stuarr[2].age = 38;
    for(int i = 0; i < 3; i++)
    {
        cout << " 姓名：" << stuarr[i].name << "\t年龄:" << stuarr[i].age << "\t成绩:" << stuarr[i].score << endl; 
    }
    return 0;
}