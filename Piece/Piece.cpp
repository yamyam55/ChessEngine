//
// Created by Yam on 07/06/2023.
//

#include "Piece.h"

int Piece::getScore() const {
    return score;
}

void Piece::setScore(int score) {
    Piece::score = score;
}

const Position *Piece::getPosition() const {
    return position;
}

void Piece::setPosition(const Position *position) {
    Piece::position = position;
}

Color Piece::getColor() const {
    return color;
}

void Piece::setColor(Color color) {
    Piece::color = color;
}

bool Piece::isUnderThreat() const {
    return is_under_threat;
}

void Piece::setIsUnderThreat(bool isUnderThreat) {
    is_under_threat = isUnderThreat;
}

bool Piece::isProtectingKing() const {
    return is_protecting_king;
}

void Piece::setIsProtectingKing(bool isProtectingKing) {
    is_protecting_king = isProtectingKing;
}

bool Piece::isHasMoved() const {
    return has_moved;
}

void Piece::setHasMoved(bool hasMoved) {
    has_moved = hasMoved;
}

bool Piece::isOnBoard() {
    // If piece has position it is on the board, otherwise it' not.
    return nullptr != position;
}

bool Piece::canMove() {
    // If piece is protecting the king it cannot move.
    if (isProtectingKing())
        return false;
    return true;
}

std::string Piece::toString() {
    return "P";
}

Piece::~Piece() {

}