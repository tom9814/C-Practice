#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

struct Student{
    string name;
    int age;
    int score;
};

struct Teacher
{
    string name;
    int id;
    int age;
    Student stu;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Teacher t;
    t.name = "王五";
    t.id = 10850;
    t.age = 50;
    t.stu = {"小王",18,99};
    cout << "老师名字:" << t.name << "\t老师编号:" << t.id << "\t老师年龄:" << t.age << "\t学生信息:" << t.stu.name << " " << t.stu.age << " " << t.stu.score << endl;
    return 0;
}