//
// Created by Yam on 14/06/2023.
//

#include "Rook.h"


std::vector<Move> Rook::getAllPossibleMoves() {
    // TODO: Implement
    return std::vector<Move>();
}

std::string Rook::toString() {
    std::string piece_string = "";
    piece_string += ROOK_SYMBOL;
    return piece_string;
}
