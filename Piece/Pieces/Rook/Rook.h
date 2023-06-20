//
// Created by Yam on 14/06/2023.
//

#ifndef CHESSENGINE_ROOK_H
#define CHESSENGINE_ROOK_H

#define ROOK_SCORE 5
#define ROOK_SYMBOL 'R'

#include "Common.h"
#include "Piece/Piece.h"
#include "Move/Move.h"

class Rook : public Piece{
public:
    Rook(const std::weak_ptr<Position> position, Color color) : Piece(ROOK_SCORE, position, color) {};

    std::vector<Move> getAllPossibleMoves() override;
    std::string toString() override;
};


#endif //CHESSENGINE_ROOK_H
