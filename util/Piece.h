//
// Created by awo on 17-04-2018.
//

#ifndef CHESSAI_CPP_PIECE_H
#define CHESSAI_CPP_PIECE_H

#include <string>
#include "PieceType.h"
#include "Color.h"

class Piece {
public:
    PieceType TYPE;

    Piece(const int value);
//    ~Piece();

    int getValue();
    Color getColor();
    bool isWhite();
    bool isBlack();
    bool isKing();
    bool isQueen();
    bool isRook();
    bool isBishop();
    bool isKnight();
    bool isPawn();

    std::string getLetter();
private:
    int value;
};


#endif //CHESSAI_CPP_PIECE_H
