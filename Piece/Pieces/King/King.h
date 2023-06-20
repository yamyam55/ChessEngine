//
// Created by Yam on 14/06/2023.
//

#ifndef CHESSENGINE_KING_H
#define CHESSENGINE_KING_H

#define KING_SCORE 0
#define KING_SYMBOL 'K'

#include "Common.h"
#include "Piece/Piece.h"
#include "Move/Move.h"

class King : public Piece{
public:
    King(const std::weak_ptr<Position> position, Color color) : Piece(KING_SCORE, position, color) {};

    std::vector<Move> getAllPossibleMoves() override;
    std::string toString() override;
};


#endif //CHESSENGINE_KING_H
