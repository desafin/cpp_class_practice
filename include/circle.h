#ifndef CIRCLE_H
#define CIRCLE_H
class Circle{
protected:
    int radius;
public:
    Circle(int radius=0);
    ~Circle();

    int getRadius();
    void setRadius(int radius);
    double getArea();
};
#endif // CIRCLE_H
