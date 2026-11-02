#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;

class Building;
//好朋友类
class GoodGay
{
public:
    GoodGay();
    void visit();

    Building *building;
};

//建筑类
class Building
{
    friend class GoodGay;
public:
    Building();

    string m_SittingRoom;
private:
    string m_BedRoom;
};

//类外定义
Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
    building = new Building;
}

void GoodGay::visit()
{
    cout << "好朋友DoodGay访问了: " << building->m_SittingRoom << endl;
    cout << "好朋友DoodGay访问了: " << building->m_BedRoom << endl;
}

void test01()
{
    GoodGay gg;
    gg.visit();
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    system("pause");
    return 0;
}