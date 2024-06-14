#include "color.h"
#include <iostream>
color::color(int r, int g, int b)
{
    this->r = r;
    this->g = g;
    this->b = b;
}
color::~color()
{
}
void color::show()
{
    std::cout << r << ' ' << g << ' ' << b << std::endl;
}

bool operator==(const color& lhs, const color& rhs) {
    return lhs.r == rhs.r && lhs.g == rhs.g && lhs.b == rhs.b;
}
color operator+(const color& lhs, const color& rhs) {
    return color(lhs.r + rhs.r, lhs.g + rhs.g, lhs.b + rhs.b);
}
