//
// Created by Yam on 14/06/2023.
//

#include "Pawn.h"

std::vector<Move> Pawn::getAllPossibleMoves() {
    // TODO: Implement
    return std::vector<Move>();
}

std::string Pawn::toString() {
    std::string piece_string = "";
    piece_string += PAWN_SYMBOL;
    return piece_string;
}
