#include "InternalBoardSquare.h"
#include "RobotInfo.h"
#include "SquareInfo.h"



InternalBoardSquare::InternalBoardSquare(){
    std::string robotDirection = 'NORTH';
    bool hasFogMoved = false;
    RobotInfo.robotPresent = false;
    RobotInfo robot;
}

RobotInfo InternalBoardSquare::getRobotInfo(){
}

SquareInfo InternalBoardSquare::getSquareInfo(){
    return SquareInfo;
}

void InternalBoardSquare::setInternalBoardSquare(){
    
}



