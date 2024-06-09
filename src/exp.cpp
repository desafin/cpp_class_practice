//
// Created by desaf on 24. 6. 9.
//
# include "exp.h"

//기본생성자
exp::exp() : base(1), exponent(0) {}

//베이스와 지수를 인자로 받는 생성자
exp::exp(int b, int e) : base(b), exponent(e) {}

// 단일 정수 인자를 받는 생성자 (지수를 1로 설정)
exp::exp(int b) : base(b), exponent(int(1)) {}

//지수를 정수로 계산하여 리턴하는 멤버 함수
int exp::getvalue() const {
    int result = 0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

//베이스 값을 리턴하는 멤버 함수
int exp::getbase() const {
    return base;
}

//지수값을 리턴하는 멤버함수
int exp::getexp() const {
    return exponent;
}
//이 객체와 객체 b의 값이 같은지 판별하는 멤버함수
bool exp::equals(const exp &b) const {
    return (base == b.base) && (exponent == b.exponent);
}