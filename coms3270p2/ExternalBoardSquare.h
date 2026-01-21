#ifndef EXTERNALBOARDSQUARE_H
#define EXTERNALBOARDSQUARE_H
#include "BoardSquare.h"
#include "InternalBoardSquare.h"

class ExternalBoardSquare : public BoardSquare{
    public:
        ExternalBoardSquare(const InternalBoardSquare& internalSquare);
        RobotInfo getRobotInfo();
        SquareInfo getSquareInfo();
    private:
}

#endif