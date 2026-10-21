#include "tile.h"

Tile::Tile(int number) 
: m_number(number)
{
}

std::ostream& operator<< (std::ostream& out, const Tile& tile)
{
    if (tile.getNum() > 9) // if two digit number
        out << " " << tile.getNum() << " ";
    else if (tile.getNum() > 0) // if one digit number
        out << "  " << tile.getNum() << " ";
    else if (tile.getNum() == 0) // if empty spot
        out << "    ";
    
    return out;
}