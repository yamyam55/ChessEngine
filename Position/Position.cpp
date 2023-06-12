//
// Created by Yam on 11/06/2023.
//

#include "Position.h"

void Position::initializePosition(uint8_t x, uint8_t y, Color color, Piece *present_piece){
    if (has_initialized)
    {
        throw invalidRequest("Position was already initialized.");
    }

    this->x = x;
    this->y = y;
    this->color = color;
    this->present_piece = present_piece;
    this->has_initialized = true;
}

uint8_t Position::getX() const {
    return x;
}

uint8_t Position::getY() const {
    return y;
}

Color Position::getColor() const {
    return color;
}

Piece* Position::getPresentPiece() const {
    return present_piece;
}

std::string Position::toString() const
{
    if (nullptr == present_piece)
    {
        return std::to_string(color);
    }

    return present_piece->toString();
}
