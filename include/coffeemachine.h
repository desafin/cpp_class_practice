//
// Created by desaf on 24. 6. 10.
//

#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H
#include <iostream>
class coffeemachine {
private:
    int coffee;
    int water;
    int sugar;
public:
    coffeemachine(int coffee, int water, int sugar);
    void drinkEspresso();
    void drinkAmericano();
    void drinkSugarCoffee();
    void fill();
    void show();
};
#endif //COFFEEMACHINE_H
