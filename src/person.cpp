#include "person.h"

Person::Person(int id, char* name){
    this->id = id;
    int len = strlen(name);
    this->name = new char[len+1];
    strcpy(this->name,name);
}

Person::Person(const Person& Person){
    this->id = Person.id;
    int len = strlen(Person.name);
    this->name = new char[len+1];
    strcpy(this->name,Person.name);
    std::cout<<"복사생성자 호출"<< this->name <<std::endl;
}

Person::~Person(){
    if(name != NULL){
        delete[] name;
    }
}
void Person::changeName(const char* name) {
    if (strlen(this->name) >= strlen(name)) {
        strcpy(this->name, name);
    }
}
void Person::show(){
    std::cout<<"이름: "<<name<<std::endl;
    std::cout<<"id: "<<id<<std::endl;
}