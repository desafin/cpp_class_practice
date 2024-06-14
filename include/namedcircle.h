#ifndef NAMEDCIRCLE_H
#define NAMEDCIRCLE_H
#include "circle.h"
#include <string>
#include <iostream>
class namedCircle : public Circle
{
private:
    std::string name;
public:
    namedCircle(int radius=0, std::string name=" ");
    ~namedCircle();
    void show();
    std::string getName();
    void setName(std::string name);
};

#endif // NAMEDCIRCLE_H