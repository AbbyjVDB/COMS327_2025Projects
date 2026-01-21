#ifndef SQUAREINFO_H
#define SQUAREINFO_H
#include "RobotInfo.h"
#include <iostream>
#pragma once

enum PBSquareContent{
    EMPTY,
    ROCK,
    FOG,
    ROCKFOG,
    WALL
};
enum PBColor{
    RED,
    BLUE,
    WHITE,
};
class SquareInfo
{
private:
    /* data */
public:
    SquareInfo();
    ~SquareInfo();
    PBSquareContent content;
    PBColor color;
    RobotInfo robot;
};

#endif




