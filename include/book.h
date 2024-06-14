#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>

class Book{
private:
    std::string title;
    int price, pages;
public:
    Book(std::string title=" ", int price=0, int pages=0);
    void show();
    std::string getTitle();
   // 프렌드 함수 선언
    friend Book& operator+=(Book& lhs, const Book& rhs);
    friend Book& operator-=(Book& lhs, const Book& rhs);
    friend bool operator!(const Book& book); // ! 연산자 함수 선언
};

#endif // BOOK_H
