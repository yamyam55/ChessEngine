//
// Created by Yam on 11/06/2023.
//

#include "Position.h"

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

std::string Position::toString()
{
    if (nullptr == present_piece)
    {
        return std::to_string(color);
    }

    return present_piece->toString();
}
