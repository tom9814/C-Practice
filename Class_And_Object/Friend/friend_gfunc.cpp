#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Building
{
friend void goodGay(Building &building);

public:
    Building()
    {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }

    string m_SittingRoom;
private:
    string m_BedRoom;
};

//全局函数
void goodGay(Building &building)
{
    cout << "好基友全局函数 正在访问： " << building.m_SittingRoom << endl;
    cout << "好基友全局函数 正在访问： " << building.m_BedRoom << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Building building;
    goodGay(building);

    system("pause");
    return 0;
}