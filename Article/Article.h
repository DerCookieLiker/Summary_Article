#pragma once
#include "String.h"
#include "Date.h"
#include <string>

enum TYPE{
    Hardware,
    Software
};


class Article{

public:
    Article(unsigned int id = 1, TYPE type= Hardware, const String &label = String(), const Date &inStockSince = Date(), double price = 0.00);

    void setType(TYPE type);
    void setLabel(const String &label);
    void setDate(const Date &inStockSince);
    void setPrice(double price);

    unsigned int getID() const;
    TYPE getType() const;
    String getLabel() const;
    Date getDate() const;
    double getPrice() const;

    std::string toString(SHOW type = SHORT) const;
private:
    const unsigned int id;
    TYPE type;
    String label;
    Date inStockSince;
    double price;

};
