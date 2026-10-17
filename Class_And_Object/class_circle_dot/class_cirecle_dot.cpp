#include <iostream>
#include <windows.h>
#include "Circle.h"
using namespace std;

// class Dot
// {
// public:
//     void setx(int x)
//     {
//         m_x = x;
//     }

//     void sety(int y)
//     {
//         m_y = y;
//     }

//     int getx()
//     {
//         return m_x;
//     }

//     int gety()
//     {
//         return m_y;
//     }

// private:
//     int m_x;
//     int m_y;
// };


// class Circle
// {
// public:
//     void setR(int r)
//     {
//         m_R = r;
//     }

//     int getR()
//     {
//         return m_R;
//     }

//     void setCenter(Dot center)
//     {
//         m_center.setx(center.getx());
//         m_center.sety(center.gety());
//     }

//     Dot getCenter()
//     {
//         return m_center;
//     }

// private:
//     int m_R;
//     Dot m_center;
// };

//判断点和圆的关系
void isOncircle(Dot &d, Circle &c)
{
    int distance = (c.getCenter().getx() - d.getx()) * (c.getCenter().getx() - d.getx()) + (c.getCenter().gety() - d.gety()) * (c.getCenter().gety() - d.gety());
    int r_distance = c.getR() * c.getR();
    if (distance > r_distance)
    {
        cout << "点在圆外" << endl;
    }
    else if(distance == r_distance)
    {
        cout << "点在圆上" << endl;
    }
    else
    {
        cout << "点在圆内" << endl;
    }
}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Circle c1;
    c1.setR(10);
    Dot center;
    center.setx(10);
    center.sety(0);
    c1.setCenter(center);

    Dot d1;
    // d1.setx(10);
    // d1.sety(10);

    // d1.setx(10);
    // d1.sety(11);

    d1.setx(10);
    d1.sety(9);

    isOncircle(d1, c1);

    system("pause");
    return 0;
}