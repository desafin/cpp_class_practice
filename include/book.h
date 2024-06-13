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
    Book& operator+=(const Book& other); // += 연산자 함수 선언
    Book& operator-=(const Book& other);   // + 연산자 함수 선언
};

#endif // BOOK_H
