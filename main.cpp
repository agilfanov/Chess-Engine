#include <iostream>
#include "Constants.cpp"
#include "Piece.cpp"
int main() {
   // std::cout << "Hello, World!" << std::endl;
   // std::cout << Constants::black_pieces_constant << std::endl;

    std::cout << Piece::white_pawn << " " << Piece::value(Piece::black_bishop);
    return 0;
}
