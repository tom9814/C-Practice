#pragma once
#include <iostream>
#include "Dot.h"
using namespace std;

class Circle
{
public:
    void setR(int r);

    int getR();

    void setCenter(Dot center);

    Dot getCenter();

private:
    int m_R;
    Dot m_center;
};