//
// Created by awo on 17-04-2018.
//

#ifndef CHESSAI_CPP_PIECETYPE_H
#define CHESSAI_CPP_PIECETYPE_H

enum class PieceType {
    NIL = 0,
    PAWN = 1,
    KNIGHT = 2,
    KING = 3,
    BISHOP = 5,
    ROOK = 6,
    QUEEN = 7,
    WHITE_PAWN = 1,
    WHITE_KNIGHT = 2,
    WHITE_KING = 3,
    WHITE_BISHOP = 5,
    WHITE_ROOK = 6,
    WHITE_QUEEN = 7,
    BLACK_PAWN = -1,
    BLACK_KNIGHT = -2,
    BLACK_KING = -3,
    BLACK_BISHOP = -5,
    BLACK_ROOK = -6,
    BLACK_QUEEN = -7
};

#endif //CHESSAI_CPP_PIECETYPE_H
