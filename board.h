#include "tile.h"
#include <array>
#include <iostream>

class Tile;

class Board
{
public:
    Board();

    friend std::ostream& operator<< (std::ostream& out, Board board);

private:
    static constexpr int s_size = 4;

    std::array<std::array<Tile, s_size> , s_size> m_tiles {
        Tile { 1 },  Tile { 2 },  Tile { 3 },  Tile { 4 },
        Tile { 5 },  Tile { 6 },  Tile { 7 },  Tile { 8 },
        Tile { 9 },  Tile { 10 }, Tile { 11 }, Tile { 12 },
        Tile { 13 }, Tile { 14 }, Tile { 15 }, Tile { 0 }
    };
};