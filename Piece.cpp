class Piece {
private:
    constexpr const static double piece_values[] {0, 1, 3, 3, 5, 9};
public:

    enum Pieces {white_pawn = 1, white_knight = 2, white_bishop = 3,
            white_rook = 4, white_queen = 5, white_king = 6,
            black_pawn = 7, black_knight = 8, black_bishop = 9, black_rook = 10,
            black_queen = 11, black_king = 12};

    static double value(int x) {
        return piece_values[x % 6];
    }
};