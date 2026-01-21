#ifndef ROBOTINFO_H
#define ROBOTINFO_H

enum PBDirection{
    NORTH, // UP
    EAST, // RIGHT
    SOUTH, // DOWN
    WEST, // LEFT
};
class RobotInfo(){
private:
public:
    bool robotPresent;
    PBColor color; // Robot Color

    RobotInfo():robotPresent(false), color(WHITE){
        
    }

    RobotInfo(bool present, PBColor c):robotPresent(present), color(c){}
}

#endif