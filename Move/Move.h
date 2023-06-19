//
// Created by Yam on 08/06/2023.
//

#ifndef CHESSENGINE_MOVE_H
#define CHESSENGINE_MOVE_H

#include "Position/Position.h"

// TODO: Read about this. do you have to declare it like this?
class Position;

class Move {
private:
    Position& source_position;
    Position& destination_position;
    int score;

public:
    Move(Position &sourcePosition, Position &destinationPosition, int score) :
            source_position(sourcePosition),
            destination_position(destinationPosition),
            score(score) {}

    // Getters
    Position &getSourcePosition() const;
    Position &getDestinationPosition() const;
    int getScore() const;

    // Setters
    void setSourcePosition(Position &sourcePosition);
    void setDestinationPosition(Position &destinationPosition);
    void setScore(int score);
};


#endif //CHESSENGINE_MOVE_H
