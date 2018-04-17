#include <iostream>
#include "util/Color.h"
#include "util/Piece.h"
#include "util/PieceType.h"
#include "util/Square.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::cout << "A king has a value of " << static_cast<int>(PieceType::BLACK_QUEEN) << std::endl;

    auto p = Piece(static_cast<int>(PieceType::BLACK_QUEEN));

    std::cout << "Letter is " << p.getLetter() << std::endl;

    Square s1 = Square();
    Square s2 = Square();

    return 0;
}