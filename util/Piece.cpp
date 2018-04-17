//
// Created by awo on 17-04-2018.
//

#include <algorithm>
#include "Piece.h"

Piece::Piece(const int value) {
    this->TYPE = PieceType::NIL;
    this->value = value;
}

int Piece::getValue() {
    return value;
}

Color Piece::getColor() {
    return (isWhite() ? Color::WHITE : Color::BLACK);
}

bool Piece::isWhite() {
    return value > 0;
}

bool Piece::isBlack() {
    return value < 0;
}

bool Piece::isKing() {
    return std::abs(value) == static_cast<int>(PieceType::KING);
}

bool Piece::isQueen() {
    return std::abs(value) == static_cast<int>(PieceType::QUEEN);
}

bool Piece::isRook() {
    return std::abs(value) == static_cast<int>(PieceType::ROOK);
}

bool Piece::isBishop() {
    return std::abs(value) == static_cast<int>(PieceType::BISHOP);
}

bool Piece::isKnight() {
    return std::abs(value) == static_cast<int>(PieceType::KNIGHT);
}

bool Piece::isPawn() {
    return std::abs(value) == static_cast<int>(PieceType::PAWN);
}

std::string Piece::getLetter() {
    std::string letter = "";

    if (isKing())
        letter = "K";
    else if (isQueen())
        letter = "Q";
    else if (isRook())
        letter = "R";
    else if (isBishop())
        letter = "B";
    else if (isKnight())
        letter = "N";
    else if (isPawn())
        letter = "P";

    if (isBlack())
        std::transform(letter.begin(), letter.end(), letter.begin(), ::tolower);

    return letter;
}