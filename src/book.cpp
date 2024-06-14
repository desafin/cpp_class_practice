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

// += 연산자 함수 정의 (프렌드 함수)
Book& operator+=(Book& lhs, const Book& rhs) {
    lhs.price += rhs.price;  // 가격 합산
    lhs.pages += rhs.pages;  // 페이지 수 합산
    lhs.title += " + " + rhs.title;  // 제목 결합
    return lhs;  // 현재 객체의 참조 반환
}

// -= 연산자 함수 정의 (프렌드 함수)
Book& operator-=(Book& lhs, const Book& rhs) {
    lhs.price -= rhs.price;  // 가격 차감
    lhs.pages -= rhs.pages;  // 페이지 수 차감
    lhs.title += " - " + rhs.title;  // 제목 결합
    return lhs;  // 현재 객체의 참조 반환
}

// ! 연산자 함수 정의 (프렌드 함수)
bool operator!(const Book& book) {
    return book.price == 0;  // 가격이 0이면 true 반환
}