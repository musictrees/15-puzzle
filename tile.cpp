#include "tile.h"

Tile::Tile(int number) 
: m_number(number)
{
}

std::ostream& operator<< (std::ostream& out, const Tile& tile)
{
    out << ' ' << tile.m_number << "  ";
    
    return out;
}