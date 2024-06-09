#include "account.h"

#include <sstream>
//
// Created by desaf on 24. 6. 9.
//
account::account(std::string name, std::string banknumber, int balance) {
    this->name = name;
    this->banknumber = banknumber;
    this->balance = balance;
}

std::string account::getOwner() const {
    return name;
}

void account::deposit(int amount) {
    balance += amount;
}

void account::withdraw(int amount) {
    balance -= amount;
}

std::string account::inquiry() const {
    return std::to_string(balance);
}