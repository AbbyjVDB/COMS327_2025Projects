#ifndef CONFIG_H
#define CONFIG_H
#pragma once

class Config{
private:
public:
    int HIT_DURATION;
    int PAINTBLOB_LIMIT;
    int ROCK_LOWER_BOUND;
    int ROCK_UPPER_BOUND;
    int FOG_LOWER_BOUND;
    int FOG_UPPER_BOUND;
    int LONG_RANGE_LIMIT;
    defaultConfig();
    Config();
    Config(const std::string& filename); 
    std::string trim(const std::string& str) const;
    std::string toLower(const std::string& str) const;
    void parseFile(const std::string& filename)   
    int getHitDuration() const;
    int getPaintBlobLimit() const;
    int getRockLowerBound() const;
    int getRockUpperBound() const;
    int getFogLowerBound() const;
    int getFogUpperBound() const;
    int getLongRangeLimit() const;
}

#endif