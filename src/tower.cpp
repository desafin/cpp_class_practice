//
// Created by desaf on 2024-06-09.
//
# include "tower.h"

//기본생성자
tower::tower() {
    height = 1;
}

tower::tower(int i) {
    height = i;
}

int tower::getHeight() const {
    return height;
}