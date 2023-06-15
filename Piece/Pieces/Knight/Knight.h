//
// Created by Yam on 14/06/2023.
//

#ifndef CHESSENGINE_KNIGHT_H
#define CHESSENGINE_KNIGHT_H

#define KNIGHT_SCORE 3
#define KNIGHT_SYMBOL 'H'

#include "Common.h"
#include "Piece/Piece.h"
#include "Move/Move.h"

class Knight : public Piece{
public:
    Knight(const Position* position, Color color) : Piece(KNIGHT_SCORE, position, color) {};

    std::vector<Move> getAllPossibleMoves();
    std::string toString();
};


#endif //CHESSENGINE_KNIGHT_H
