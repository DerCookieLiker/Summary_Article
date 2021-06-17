#include "Date.h"
#include <iostream>
#include "stdio.h"

Date::Date(int day, int month, int year) : day(day), month(month), year(year){ }

std::string Date::toString(SHOW type) const{
    char str[100];

    char months[12][16] = {
        "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
    };
    char monthsShort[12][5] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"
    };

    switch(type){

    case SHORT:
        sprintf(str, "%d%c%d%c%d", this->day, '.', this->month, '.', this->year);
        break;
    case MEDIUM:
        sprintf(str, "%d%c%s%c%d", this->day, '.', monthsShort[this->month - 1], '.', this->year);
        break;
    case FULL:
        sprintf(str, "%d%c%s%c%d", this->day, '.', months[this->month - 1], '.', this->year);
        break;
    }

    return std::string(str);
}
