#include "Constants.cpp"

class Board {
private:
    // first 8 bits are first row, and so on, 1st bit of the number is the bottom left corner of the board
    unsigned long long white_pieces {};
    unsigned long long white_pawns {};
    unsigned long long white_knights {};
    unsigned long long white_bishops {};
    unsigned long long white_rooks {};
    unsigned long long white_queen {};
    unsigned long long white_king {};

    unsigned long long black_pieces {};
    unsigned long long black_pawns {};
    unsigned long long black_knights {};
    unsigned long long black_bishops {};
    unsigned long long black_rooks {};
    unsigned long long black_queen {};
    unsigned long long black_king {};

    bool white_left_rook_moved {};
    bool white_right_rook_moved {};
    bool white_king_moved {};

    bool black_left_rook_moved {};
    bool black_right_rook_moved {};
    bool black_king_moved {};

    bool white_turn {};

public:

    explicit Board() {
        white_pieces = Constants::white_pieces_constant;
        white_pawns = Constants::white_pawn_constant;
        white_knights = Constants::white_knight_constant;
        white_bishops = Constants::white_bishop_constant;
        white_rooks = Constants::white_rook_constant;
        white_queen = Constants::white_queen_constant;
        white_king = Constants::white_king_constant;
        white_left_rook_moved = false;
        white_right_rook_moved = false;
        white_king_moved = false;

        black_pieces = Constants::black_pieces_constant;
        black_pawns = Constants::black_pawn_constant;
        black_knights = Constants::black_knight_constant;
        black_bishops = Constants::black_bishop_constant;
        black_rooks = Constants::black_rook_constant;
        black_queen = Constants::black_queen_constant;
        black_king = Constants::black_king_constant;
        black_left_rook_moved = false;
        black_right_rook_moved = false;
        black_king_moved = false;

        white_turn = true;
    }


};
