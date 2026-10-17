#include "Circle.h"

void Circle::setR(int r)
{
    m_R = r;
}

int Circle::getR()
{
    return m_R;
}

void Circle::setCenter(Dot center)
{
    m_center.setx(center.getx());
    m_center.sety(center.gety());
}

Dot Circle::getCenter()
{
    return m_center;
}