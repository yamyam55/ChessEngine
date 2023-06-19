//
// Created by Yam on 14/06/2023.
//

#ifndef CHESSENGINE_BISHOP_H
#define CHESSENGINE_BISHOP_H

#define BISHOP_SCORE 3
#define BISHOP_SYMBOL 'B'

#include "Common.h"
#include "Piece/Piece.h"
#include "Move/Move.h"

class Bishop : public Piece{
public:
    Bishop(const Position* position, Color color) : Piece(BISHOP_SCORE, position, color) {};

    std::vector<Move> getAllPossibleMoves();
    std::string toString();
};


#endif //CHESSENGINE_BISHOP_H
