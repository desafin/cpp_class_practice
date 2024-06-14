#include "circle.h"

Circle::Circle(int radius)
{
    this->radius = radius;
}
Circle::~Circle()
{
}
int Circle::getRadius()
{
    return radius;
}
void Circle::setRadius(int radius)
{
    this->radius = radius;
}
double Circle::getArea()
{
    return 3.14 * radius * radius;
}