//
// Created by Yam on 14/06/2023.
//

#include "King.h"

std::vector<Move> King::getAllPossibleMoves() {
    // TODO: Implement
    return std::vector<Move>();
}

std::string King::toString() {
    std::string piece_string = "";
    piece_string += KING_SYMBOL;
    return piece_string;
}
