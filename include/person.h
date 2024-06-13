#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
#include <cstring>
class Person{
private:
    char* name;
    int id;
public:
   Person(int id,char* name); 
    //복사생성자
    Person(const Person& Person);
    ~Person();
    void changeName(const char* name);
    void show();

};
#endif //PERSON_H
