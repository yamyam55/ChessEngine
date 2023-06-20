//
// Created by Yam on 11/06/2023.
//

#ifndef CHESSENGINE_POSITION_H
#define CHESSENGINE_POSITION_H

#include <string>
#include <memory>

#include "Common.h"
#include "Piece/Piece.h"

class Piece;

class Position {
private:
    uint8_t x;
    uint8_t y;
    Color color;
    std::shared_ptr<Piece> present_piece;

public:
    Position() : x(0), y(0), color(kWhite), present_piece(nullptr) {};

    Position(uint8_t x, uint8_t y, Color color, std::shared_ptr<Piece> present_piece) :
        x(x),
        y(y),
        color(color),
        present_piece(present_piece) {};


    void initializePosition(uint8_t x, uint8_t y, Color color, std::shared_ptr<Piece> present_piece);

    // Getters
    uint8_t getX() const;
    uint8_t getY() const;
    Color getColor() const;
    std::shared_ptr<Piece> getPresentPiece() const;

    // Setters
    void setPresentPiece(std::shared_ptr<Piece> new_piece);

    std::string toString() const;
};


#endif //CHESSENGINE_POSITION_H
