//
// Created by desaf on 24. 6. 10.
//
#include "coffeemachine.h"

coffeemachine::coffeemachine(int coffee, int water, int sugar) {
    this->coffee = coffee;
    this->water = water;
    this->sugar = sugar;
}

void coffeemachine::drinkEspresso() {
    coffee--;
    water--;
}

void coffeemachine::drinkAmericano() {
    coffee--;
    water -= 2;
}

void coffeemachine::drinkSugarCoffee() {
    coffee--;
    water-=2;
    sugar--;
}

void coffeemachine::fill() {
    coffee = 10;
    water = 10;
    sugar = 10;
}

void coffeemachine::show() {
    std::cout << "커피 머신 상태, 커피: " << coffee << " 물: " << water << " 설탕: " << sugar << std::endl;
}