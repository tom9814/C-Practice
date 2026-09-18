#include <iostream>
#include <windows.h>
#include <string>
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
    Student s1;
    s1.name = "潘俊成";
    s1.age = 19;
    s1.score = 100;
    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.score << endl;
    cout << endl;
    Student s2 = {"样楚昊", 19, 100};
    cout << s2.name << endl;
    cout << s2.age << endl;
    cout << s2.score << endl;
    return 0;
}