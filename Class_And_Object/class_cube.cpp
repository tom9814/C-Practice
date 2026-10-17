#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

// 立方体类
class Cube
{
public:
    // 设置长，宽，高
    void setLWH(int L, int W, int H)
    {
        m_L = L;
        m_W = W;
        m_H = H;
    }

    // 获取面积
    int getS()
    {
        return (2 * (m_L * m_W + m_L * m_H + m_W * m_H));
    }

    // 获取体积
    int getV()
    {
        return (m_L * m_W * m_H);
    }

    //判断两个立方体是否相等
    int samecube(Cube c2)
    {
        if (m_L == c2.m_L && m_W == c2.m_W && m_H == c2.m_H)
        {
            cout << "两个立方体相等" << endl;
            return 1;
        }
        cout << "两个立方体不相等" << endl;
        return 0;
    }

private:
    int m_L;
    int m_W;
    int m_H;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Cube c1;
    c1.setLWH(1, 1, 1);
    Cube c2;
    // c2.setLWH(1, 1, 1);
    c2.setLWH(1, 2, 3);
    cout << "立方体的面积为: " << c1.getS() << endl;
    cout << "立方体的体积为: " << c1.getV() << endl;
    c1.samecube(c2);

    system("pause");
    return 0;
}