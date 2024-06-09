//
// Created by desaf on 24. 6. 9.
//

#ifndef EXP_H
#define EXP_H
class exp {
public:
    // 기본 생성자
    exp();

    // 단일 정수 인자를 받는 생성자 (지수를 1로 설정)
    exp(int b);

    // 베이스와 지수를 인자로 받는 생성자
    exp(int b, int e);

    // 지수를 정수로 계산하여 리턴하는 멤버 함수
    int getvalue() const;

    // 베이스 값을 리턴하는 멤버 함수
    int getbase() const ;

    // 지수 값을 리턴하는 멤버 함수
    int getexp() const;

    // 이 객체와 객체 b의 값이 같은지 판별하는 멤버 함수
    bool equals(const exp& b) const;
private:
    int base;   // 베이스 값
    int exponent; // 지수 값
};
#endif //EXP_H
