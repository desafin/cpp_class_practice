#ifndef COLOR_H
#define COLOR_H
class color
{
private:
    /* data */
    int r, g, b;
public:
    color(int r=0, int g=0, int b=0);
    ~color();
    void show();
    friend bool operator==(const color& lhs, const color& rhs); // ! 연산자 함수 선언
    friend color operator+(const color& lhs, const color& rhs); // ! 연산자 함수 선언
};

#endif //COLOR_H
