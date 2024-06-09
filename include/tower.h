//
// Created by desaf on 2024-06-09.
//

#ifndef TOWER_H
#define TOWER_H
class tower {
public:
    //기본생성자
    tower();

    //단일정수 인자를 받는 생성자
    tower(int i);

    int getHeight() const;

private:
    int height;
};
#endif //TOWER_H
