//
// Created by Yam on 14/06/2023.
//

#include "Bishop.h"

std::vector<Move> Bishop::getAllPossibleMoves() {
    // TODO: Implement
    return std::vector<Move>();
}

std::string Bishop::toString() {
    std::string piece_string = "";
    piece_string += BISHOP_SYMBOL;
    return piece_string;
}
