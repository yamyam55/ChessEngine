//
// Created by Yam on 11/06/2023.
//

#ifndef CHESSENGINE_POSITION_H
#define CHESSENGINE_POSITION_H

#include <string>

#include "Common.h"
#include "Piece/Piece.h"

class Piece;

class Position {
private:
    uint8_t x;
    uint8_t y;
    Color color;
    Piece* present_piece;

public:
    Position(uint8_t x, uint8_t y, Color color, Piece *presentPiece) :
        x(x),
        y(y),
        color(color),
        present_piece(presentPiece) {}


    // Getters
    uint8_t getX() const;
    uint8_t getY() const;
    Color getColor() const;
    Piece *getPresentPiece() const;

    // Setters
    void setPiece(Piece* new_piece);

    std::string toString();
};


#endif //CHESSENGINE_POSITION_H
