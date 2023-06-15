//
// Created by Yam on 14/06/2023.
//

#ifndef CHESSENGINE_QUEEN_H
#define CHESSENGINE_QUEEN_H

#define QUEEN_SCORE 9
#define QUEEN_SYMBOL 'Q'

#include "Common.h"
#include "Piece/Piece.h"
#include "Move/Move.h"

class Queen : public Piece{
public:
    Queen(const Position* position, Color color) : Piece(QUEEN_SCORE, position, color) {};

    std::vector<Move> getAllPossibleMoves() override;
    std::string toString() override;
};


#endif //CHESSENGINE_QUEEN_H
