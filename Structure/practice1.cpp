#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
using namespace std;
//学生结构体定义
struct Student
{
    string sname;
    int score;
};
//老师结构体定义
struct Teacher
{
    string tname;
    struct Student sarray[5];
};
//给学生和老师赋值的函数
void allocateSpace(struct Teacher tarray[], int len)
{
    string nameseed = "ABCDE";
    for(int i = 0; i < len; i++)
    {
        //老师名字赋值
        tarray[i].tname = "Teacher_";
        tarray[i].tname += nameseed[i];
        //老师带的学生的赋值
        for(int j = 0; j < 5; j++)
        {
            tarray[i].sarray[j].sname = "Student_"; 
            tarray[i].sarray[j].sname += nameseed[j];
            int random = rand() % 61 + 40;
            tarray[i].sarray[j].score = random;
        } 
    }
}
//输出老师和学生的信息
void printTarray(const struct Teacher tarray[], int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << "老师名字:" << tarray[i].tname << endl;
        cout << "他带的学生信息:" << endl;
        for(int j = 0; j < 5; j++)
        {
            cout << "\t学生名字:" << tarray[i].sarray[j].sname << " 学生成绩:" << tarray[i].sarray[j].score << endl;
        }
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    //设置随机数种子
    srand((unsigned int)time(NULL));
    Teacher tarr[3];
    int len = sizeof(tarr) / sizeof(tarr[0]);
    allocateSpace(tarr,len);
    printTarray(tarr,len);
    return 0;
}