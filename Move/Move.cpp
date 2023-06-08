//
// Created by Yam on 08/06/2023.
//

#include "Move.h"

Position &Move::getSourcePosition() const {
    return source_position;
}

void Move::setSourcePosition(Position &sourcePosition) {
    source_position = sourcePosition;
}

Position &Move::getDestinationPosition() const {
    return destination_position;
}

void Move::setDestinationPosition(Position &destinationPosition) {
    destination_position = destinationPosition;
}

int Move::getScore() const {
    return score;
}

void Move::setScore(int score) {
    Move::score = score;
}
