cmake_minimum_required(VERSION 3.25)
project(ChessEngine)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(ChessEngine main.cpp Piece/Piece.cpp Piece/Piece.h Common.h Move/Move.cpp Move/Move.h Position/Position.cpp Position/Position.h Board/Board.cpp Board/Board.h Piece/Pieces/Pawn/Pawn.cpp Piece/Pieces/Pawn/Pawn.h Piece/Pieces/Knight/Knight.cpp Piece/Pieces/Knight/Knight.h Piece/Pieces/Bishop/Bishop.cpp Piece/Pieces/Bishop/Bishop.h Piece/Pieces/Rook/Rook.cpp Piece/Pieces/Queen/Queen.cpp Piece/Pieces/King/King.cpp)
