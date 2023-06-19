#include <iostream>
#include <memory>

#include "Board/Board.h"

void printUsage()
{
    std::cout << "Usage: ChessEngine.exe <board file path>" << std::endl;
}

int main(int argc, char *argv[]) {
    std::shared_ptr<Board> board;
    try {
        switch (argc) {
            case 1:
                board = std::make_shared<Board>();
                break;
            case 2:
                board = std::make_shared<Board>(argv[1]);
                break;
            default:
                printUsage();
                return -1;
        }

        board->printBoard();

    } catch (invalidRequest e) {
        std::cout << "Error: " << e.what() << std::endl;
    }


    return 0;
}
