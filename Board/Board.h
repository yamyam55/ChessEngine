//
// Created by Yam on 11/06/2023.
//

#ifndef CHESSENGINE_BOARD_H
#define CHESSENGINE_BOARD_H

#include "Common.h"
#include "Position/Position.h"

class Board {
private:
    Position board[BOARD_LENGTH][BOARD_WIDTH];

public:
    Board();
    Board(std::string board_file_path);

    const Position& getPosition(uint8_t x, uint8_t y) const;
    void printBoard() const;
};


#endif //CHESSENGINE_BOARD_H
