//
// Created by awo on 17-04-2018.
//

#include "Square.h"

#include <iostream>

static bool initialized = false;

Square::Square() {
    init();
}

void Square::init() {
    if (initialized) return;
    initialized = true;

    auto row = -16;
    auto arr[64] =
    for (auto i = 0; i < 64; i++) {
        auto num = (i % 8) + row;
        SquareType iterator = SquareType[num];

        if (i % 8 == 0) {
            std::cout << std::endl;
            row += 16;
        }

        std::cout << num << " ";
    }
    std::cout << std::endl << std::endl;
}
