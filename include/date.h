//
// Created by desaf on 24. 6. 9.
//

#ifndef DATE_H
#define DATE_H
#include <string>
//date 클래스 선언
class date {
private:
    int year;
    int month;
    int day;
    std::string independenceDay;
public:
    //생성자 선언
    date(int y, int m , int d);

    date(std::string independenceDay);

    std::string getYear() const;

    std::string getMonth() const;

    std::string getDay() const;

    void show();
};
#endif //DATE_H
