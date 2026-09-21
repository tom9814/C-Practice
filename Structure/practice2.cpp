#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
//结构体英雄的定义
struct Hero
{
    string name;
    int age;
    string gender;
};
//冒泡排序(依据是年龄)
void Bubblesort(Hero Harray[], int len)
{
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len - i - 1; j++)
        {
            if(Harray[j].age > Harray[j + 1].age)
            {
                Hero temp = Harray[j];
                Harray[j] = Harray[j + 1];
                Harray[j + 1] = temp;
            }
        }
    }
}

int main()
{   
    SetConsoleOutputCP(CP_UTF8);
    Hero Harray[5] = {
        {"刘备",23,"男"},
        {"关羽",22,"男"},
        {"张飞",20,"男"},
        {"赵云",21,"男"},
        {"貂蝉",19,"女"}
    };
    int len = sizeof(Harray) / sizeof(Harray[0]);
    Bubblesort(Harray,len);
    for(int i = 0; i < len; i++)
    {
        cout << Harray[i].name << " " << Harray[i].age << " " << Harray[i].gender <<endl;
    }
    return 0;
}