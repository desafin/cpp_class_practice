//
// Created by desaf on 24. 6. 9.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

class account {
private:
    std::string name;
    std::string banknumber;
    int balance;
public:
    account(std::string name, std::string banknumber, int balance);

    std::string getOwner() const;

    void deposit(int amount);

    void withdraw(int amount);

    std::string inquiry() const;

};
#endif //ACCOUNT_H
