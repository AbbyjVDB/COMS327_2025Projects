#ifndef INTERNALBOARDSQUARE_H
#define INTERNALBOARDSQUARE_H
#include "BoardSquare.h"
#pragma once


class InternalBoardSquare : public BoardSquare{
private:
public:
    InternalBoardSquare();
    ~InternalBoardSquare(); //Destructor
    InternalBoardSquare(const Box &rhs);
    const InternalBoardSquare &operator=(const InternalBoardSquare &rhs);
    RobotInfo getRobotInfo();
    SquareInfo getSquareInfo();
    InternalBoardSquare getInternalBoardSquare();
    void setInternalBoardSquare();

}

#endif