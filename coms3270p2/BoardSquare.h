#ifndef BOARDSQUARE_H
#define BOARDSQUARE_H
#include "RobotInfo.h"
#include "SquareInfo.h"
#include <iostream>



class BoardSquare{
protected:
public:
    BoardSquare();
    virtual SquareInfo getSquareInfo() const = 0;
    virtual RobotInfo getRobotInfo() const = 0;

};

#endif