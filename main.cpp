#include <iostream>
#include "exp.h"
#include "tower.h"
#include "date.h"
#include "account.h" // include/account
#include "coffeemachine.h"
#include "person.h"
#include "morse.h"
#include "book.h"
#include "color.h"
using namespace std;

int main() {
    exp a(3,2);
    exp b(9);
    exp c;

    cout<<a.getvalue() << " " << b.getvalue() <<" "<<c.getvalue()<<endl;
    cout<<"a의 베이스"<<a.getbase()<<" "<<"b의 베이스"<< b.getbase() <<" "<<"c의 베이스"<< c.getbase() <<endl;

    if(a.equals(b))
        cout<<"a와 b는 같다."<<endl;
    else
        cout<<"a와 b는 다르다."<<endl;

    tower myTower(1);
    cout<<"탑의 높이는 "<<myTower.getHeight()<<"입니다."<<endl;
    tower seoulTower(100);
    cout<<"서울타워의 높이는 "<<seoulTower.getHeight()<<"입니다."<<endl;

    date birth(2021,6,9);
    date independenceDay("2015/8/15");
    independenceDay.show();
    cout<<"생일은 "<<birth.getYear()<<"년 "<<birth.getMonth()<<"월 "<<birth.getDay()<<"일 입니다."<<endl;

    account gildong("홍길동","123-45-6789",100000);
    gildong.deposit(100000);
    cout<<gildong.getOwner()<<"님의 잔액은 "<<gildong.inquiry()<<"원 입니다."<<endl;
    gildong.withdraw(50000);
    cout<<gildong.getOwner()<<"님의 잔액은 "<<gildong.inquiry()<<"원 입니다."<<endl;

    coffeemachine java(5,10,3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();

    Person father(1,"kitae");
    Person daughter(father);

    cout<< "daughter 객체 생성직후"<<endl;
    father.show();
    daughter.show();
    daughter.changeName("Grace");
    cout<<"daughter 이름을 Grace로 변경한 후"<<endl;
    father.show();
    daughter.show();


    Morse morse;
    std::string text = "HELLO WORLD";
    std::string morseCode = morse.textToMorse(text);
    std::cout << "Text: " << text << "\nMorse: " << morseCode << std::endl;

    std::string morseMessage = ".... . .-.. .-.. --- / .-- --- .-. .-.. -..";
    std::string decodedText = morse.morseToText(morseMessage);
    std::cout << "Morse: " << morseMessage << "\nText: " << decodedText << std::endl;


    Book book1("C++ Programming", 30000, 500);
    Book book2("Data Structures", 20000, 300);
    Book book3;

    book1.show();
    book2.show();

    book3 = book1;
    book3 += book2;
    book3.show();

    book3 -= book2;
    book3.show();

    color red(255, 0, 0);
    color blue(0, 0, 255);
    color pupple;
    pupple = red + blue;
    pupple.show();

    color fuchsia(255, 0, 255);
    if(pupple==fuchsia)
        cout<<"두 색상은 같습니다."<<endl;
    else
        cout<<"두 색상은 다릅니다."<<endl;



    return 0;
    
}

