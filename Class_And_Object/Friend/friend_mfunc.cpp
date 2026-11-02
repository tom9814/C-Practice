#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Building;
class GoodGay
{
public:
    GoodGay();
    void visit();
    void visit02();
    Building *building;
};

class Building
{
    friend void GoodGay::visit();
public:
    Building();

public:
    string m_SittingRoom;

private:
    string m_BedRoom;
};

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
    cout << "visit()访问了: " << building->m_SittingRoom << endl;
    cout << "visit()访问了: " << building->m_BedRoom << endl;
}

void GoodGay::visit02()
{
    cout << "visit02()访问了: " << building->m_SittingRoom << endl;
    // cout << "visit02()访问了: " << building->m_BedRoom << endl;
}

void test01()
{
    GoodGay gg;
    gg.visit();
    gg.visit02();
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    system("pause");
    return 0;
}