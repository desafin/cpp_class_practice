#include "namedcircle.h"
#include <iostream>
namedCircle::namedCircle(int radius, std::string name)
{
    this->radius = radius;
    this->name = name;
}
namedCircle::~namedCircle()
{
}
void namedCircle::show()
{
    std::cout << "반지름이 " << radius << "인 " << name << std::endl;
}
std::string namedCircle::getName()
{
    return name;
}
void namedCircle::setName(std::string name)
{
    this->name = name;
}