#include "book.h"

Book::Book(std::string title, int price, int pages) {
    this->title = title;
    this->price = price;
    this->pages = pages;
}

void Book::show() {
    std::cout << title << ' ' << price << "원 " << pages << " 페이지" << std::endl;
    }

std::string Book::getTitle() {
    return title;
}

// += 연산자 함수 정의
Book& Book::operator+=(const Book& other) {
    this->price += other.price;
    this->pages += other.pages;
    this->title += " + " + other.title;
    return *this;
}

// += 연산자 함수 정의
Book& Book::operator-=(const Book& other) {
    this->price -= other.price;
    this->pages -= other.pages;
    this->title += " - " + other.title;
    return *this;
}