#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

struct Student{
    string name;
    int age;
    int score;
};

void structprint1(Student stu)
{
    stu.age = 100;
    cout <<  "在子函数里，姓名:" << stu.name << "\t年龄:" << stu.age << " 成绩" << stu.score << endl;
}

void structprint2(Student *stup)
{
    stup->age = 100;
    cout <<  "在主函数里，姓名:" << stup->name << "\t年龄:" << stup->age << "成绩" << stup->score << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Student stu = {"潘俊成", 18, 100};
    structprint2(&stu);
    cout <<  "在主函数里，姓名:" << stu.name << "\t年龄:" << stu.age << " 成绩" << stu.score << endl;
    return 0;
}