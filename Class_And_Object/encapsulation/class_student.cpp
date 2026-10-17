#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Student
{
public:
    string stu_name;
    int stu_no;

    void inputstu()
    {
        cout << "请输入学生的姓名:" << endl;
        cin >> stu_name;
        cout << "请输入学生的学号:" << endl;
        cin >> stu_no;
    }

    void outputstu()
    {
        cout << "学生的姓名是: " << stu_name << endl;
        cout << "学生的学号是: " << stu_no << endl;
    }
};

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    Student s1;
    s1.inputstu();
    s1.outputstu();

    system("pause");
    return 0;
}