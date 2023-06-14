//
// Created by Yam on 11/06/2023.
//

#include <fstream>
#include <sstream>

#include "Board.h"

#include "Piece/Pieces/Pawn/Pawn.h"

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

Board::Board(std::string board_file_path) {
    std::ifstream board_file;
    std::string line;

    board_file.open(board_file_path);
    if (board_file.is_open() == false)
    {
        throw invalidRequest("Unable to open board file.");
    }

    while (std::getline(board_file, line))
    {
        std::string piece_type_string, piece_color_string, x_position_string, y_position_string;
        std::stringstream piece_info(line);

        // Parse line: piece type, color, x position, y position. e.g. P,B,1,1
        std::getline(piece_info, piece_type_string, ',');
        std::getline(piece_info, piece_color_string, ',');
        std::getline(piece_info, x_position_string, ',');
        std::getline(piece_info, y_position_string, ',');

        // TODO: Add validation for values B/W.
        Color piece_color = (piece_color_string.c_str()[0] == 'W') ? kWhite : kBlack;

        // TODO: Add validation for values between 0-7.
        std::uint8_t x_position = std::stoi(x_position_string);
        std::uint8_t y_position = std::stoi(y_position_string);

        Position& piece_position = const_cast<Position&>(getPosition(x_position, y_position));

        Piece* new_piece = nullptr;
        switch (piece_type_string.c_str()[0])
        {
            case PAWN_SYMBOL: new_piece = new Pawn(&piece_position, piece_color);
            case '': new_piece = new Pawn(&piece_position, piece_color);
            case 'P': new_piece = new Pawn(&piece_position, piece_color);
            case 'P': new_piece = new Pawn(&piece_position, piece_color);
            case 'P': new_piece = new Pawn(&piece_position, piece_color);

        }
    }

    board_file.close();

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