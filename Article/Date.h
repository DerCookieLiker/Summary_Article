#pragma once
#include <string>
enum SHOW{
    SHORT,
    MEDIUM,
    FULL
};


class Date{

public:
    Date(int day = 1, int month = 1, int year = 2021);

    std::string toString(SHOW type = SHORT) const;
private:
    int day;
    int month;
    int year;
};
