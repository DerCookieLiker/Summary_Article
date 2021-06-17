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
    Article(unsigned int id = 1, TYPE type = Hardware, const String &label = String(), const Date &inStockSince = Date(), double price = 0.00);
    Article(unsigned int id, TYPE type, const String &label, int day, int month, int year, double price = 0.00);
    ~Article();
    void setType(TYPE type);
    void setDate(const Date &inStockSince);
    void setPrice(double price);

    unsigned int getID() const;
    TYPE getType() const;
    String getLabel() const;
    Date getDate() const;
    double getPrice() const;

    std::string toString(SHOW type = SHORT) const;

    static int getInst();
private:
    const unsigned int id;
    TYPE type;
    String label;
    Date inStockSince;
    double price;

    static int counter;

};
