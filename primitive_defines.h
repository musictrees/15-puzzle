#pragma once

enum class Direction : unsigned int
{
    UP = 0,
    RIGHT,
    LEFT,
    DOWN 
};

// easy way of accessing a coordinate on the board
struct PointPair
{
    int x, y;
};
