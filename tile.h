#pragma once
#include <iostream>

class Tile
{
public:
    explicit Tile(int number);

    int getNum()   const { return m_number; }

    bool isEmpty() const { return m_number == 0; }

    friend std::ostream& operator<< (std::ostream& out, const Tile& tile);

private:
    // 0..15, where 0 is the missing tile on the puzzle
    int m_number; 
};
