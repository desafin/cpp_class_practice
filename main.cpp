#include <iostream>
#include "exp.h"
#include "tower.h"
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
}
