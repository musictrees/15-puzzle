#include "board.h"

constexpr int g_console_lines { 25 };

Board::Board() = default;

std::ostream& operator<< (std::ostream& out, Board board)
{
    // keeping the board always on the bottom of the console and away from the last board output
    for (int i = 0; i < g_console_lines; ++i)
        std::cout << '\n';

    for (int y = 0; y < board.s_size; y++)
    {
        for (int x = 0; x < board.s_size; x++)
            out << board.m_tiles[y][x];

        out << '\n';
    }

    return out;
}
