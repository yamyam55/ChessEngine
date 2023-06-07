//
// Created by Yam on 07/06/2023.
//

#ifndef CHESSENGINE_PIECE_H
#define CHESSENGINE_PIECE_H

#include <vector>

#include "Common.h"


// TODO: Remove after implementing Position class.
class Position
{
public:
    uint8_t getX();
    uint8_t getY();
};

// TODO: Remove after implementing Move class.
class Move
{};

class Piece {
private:
    int score;
    const Position* position;
    Color color;
    bool is_under_threat;
    bool is_protecting_king;
    bool has_moved;

public:
    Piece(int score, const Position* position, Color color) :
        score(score),
        position(position),
        color(color),
        is_under_threat(false),
        is_protecting_king(false),
        has_moved(false){}

    // Getters
    int getScore() const;
    const Position *getPosition() const;
    Color getColor() const;
    bool isUnderThreat() const;
    bool isProtectingKing() const;
    bool isHasMoved() const;

    // Setters
    void setPosition(const Position *position);
    void setScore(int score);
    void setColor(Color color);
    void setIsUnderThreat(bool isUnderThreat);
    void setIsProtectingKing(bool isProtectingKing);
    void setHasMoved(bool hasMoved);

    bool isOnBoard();
    bool canMove();
    virtual std::vector<Move> getAllPossibleMoves();
};


#endif //CHESSENGINE_PIECE_H
