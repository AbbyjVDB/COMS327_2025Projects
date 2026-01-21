#include "ExternalBoardSquare.h"

ExternalBoardSquare::ExternalBoardSquare(const InternalBoardSquare &internalSquare){

    SquareInfo info = internalSquare.getSquareInfo();

    content = info.content;
    color = info.color;
    robotInfo = info.robot;
}