//
// Created by awo on 17-04-2018.
//

#ifndef CHESSAI_CPP_SQUARE_H
#define CHESSAI_CPP_SQUARE_H

#include <map>
#include "SquareType.h"

class Square {
public:
    Square();
    SquareType type;

private:
    static std::map<int, Square> lookup;
    static void init();
    int value;
};

#endif //CHESSAI_CPP_SQUARE_H
