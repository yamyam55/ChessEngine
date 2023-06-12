cmake_minimum_required(VERSION 3.25)
project(ChessEngine)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(ChessEngine main.cpp Piece/Piece.cpp Piece/Piece.h Common.h Move/Move.cpp Move/Move.h Position/Position.cpp Position/Position.h Board/Board.cpp Board/Board.h)
