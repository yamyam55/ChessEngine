//
// Created by Yam on 14/06/2023.
//

#ifndef CHESSENGINE_PAWN_H
#define CHESSENGINE_PAWN_H

#define PAWN_SCORE 1
#define PAWN_SYMBOL 'P'

#include "Common.h"
#include "Piece/Piece.h"

#include "Move/Move.h"

class Pawn : public Piece{
public:
    Pawn(const Position* position, Color color) : Piece(PAWN_SCORE, position, color) {};

    std::vector<Move> getAllPossibleMoves();
    std::string toString();
};


#endif //CHESSENGINE_PAWN_H
