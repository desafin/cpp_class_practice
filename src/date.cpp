//
// Created by desaf on 24. 6. 9.
//
#include "date.h"

#include <iostream>

date::date(int y, int m, int d) {
    year= y;
    month = m;
    day = d;
}

date::date(std::string independenceDay) {
    //2015/8/15 형식으로 들어온 문자열을 분리하여 year, month, day에 저장
    year = std::stoi(independenceDay.substr(0,4));
    month = std::stoi(independenceDay.substr(5,2));
    day = std::stoi(independenceDay.substr(8,2));
}

std::string date::getYear() const {
    return std::to_string(year);
}

std::string date::getMonth() const {
    return std::to_string(month);
}

std::string date::getDay() const {
    return std::to_string(day);
}

void date::show()  {
    std::cout<<year<<"년 "<<month<<"월 "<<day<<"일"<<std::endl;
}
