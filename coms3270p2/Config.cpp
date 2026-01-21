#include "Config.h"
#include <fstream>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <iostream>

Config::defaultConfig(){
    HIT_DURATION = 20;
    PAINTBLOB_LIMIT = 30;
    ROCK_LOWER_BOUND = 10;
    ROCK_UPPER_BOUND = 20;
    FOG_LOWER_BOUND = 5;
    FOG_UPPER_BOUND = 10;
    LONG_RANGE_LIMIT = 30;
}

Config::Config(){
    defaultConfig();
}

Config::Config(const std::string& filename){
    defaultConfig();
    parseFile(filename);
}  

std::string Config::trim(const std::string& str) const{
    size_t first = str.find_first_not_of(" \t\n\r");
    if (first == std::string::npos)
        return "";
    size_t last = str.find_last_not_of(" \t\n\r");
    return str.substr(first, last - first + 1);
}

std::string Config::toLower(const std::string& str) const{
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(),[](unsigned char c){ return std::tolower(c); });
    return result;
}

void Config::parseFile(const std::string& filename){

}

int Config::getHitDuration() const{
    return HIT_DURATION;
}

int Config::getPaintBlobLimit() const{

}

int Config::getRockLowerBound() const{

}

int Config::getRockUpperBound() const{

}

int Config::getFogLowerBound() const{

}

int Config::getFogUpperBound() const{

}

int Config::getLongRangeLimit() const{

}