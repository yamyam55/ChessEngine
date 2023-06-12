//
// Created by Yam on 11/06/2023.
//

#include "Board.h"

Board::Board()
{
    Color current_position_color = kWhite;
    for (int i = 0; i < BOARD_WIDTH; ++i)
    {
        for (int j = 0; j < BOARD_LENGTH; ++j)
        {
            board[i][j].initializePosition(i, j, current_position_color, nullptr);
            // Change next position color.
            current_position_color = (current_position_color) ? kWhite : kBlack;
        }
    }
}

const Position& Board::getPosition(uint8_t x, uint8_t y) const {
    if ((x >= BOARD_WIDTH) || (y >= BOARD_LENGTH))
    {
        throw invalidRequest();
    }

    return board[x][y];
}

void Board::printBoard() const {
    for (int i = 0; i < BOARD_LENGTH; i++)
    {
        for (int j = 0; j < BOARD_WIDTH; j++)
        {
            std::cout << board[i][j].toString() << " ";
        }

        std::cout << std::endl;
    }
}