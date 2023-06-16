//
// Created by Yam on 07/06/2023.
//

#ifndef CHESSENGINE_COMMON_H
#define CHESSENGINE_COMMON_H

#include <cinttypes>
#include <exception>
#include <iostream>
#include <memory>

#define BOARD_WIDTH 8
#define BOARD_LENGTH 8

enum Color
{
    kWhite = 0,
    kBlack,
};

class invalidRequest : public std::exception
{
private:
    std::string exception_message;

public:
    invalidRequest(std::string exception_message = "Invalid request was made.") : exception_message(exception_message) {};
    const char* what() { return exception_message.c_str();}
};

#endif //CHESSENGINE_COMMON_H
