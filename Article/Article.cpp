#include "Article.h"
#include "stdio.h"
#include "string.h"
#include <bits/stdc++.h>

Article::Article(unsigned int id, TYPE type, const String &label, const Date &inStockSince, double price) : id(id), type(type), label(label), inStockSince(inStockSince), price(price) { counter++; }
Article::Article(unsigned int id, TYPE type, const String &label, int day, int month, int year, double price) : id(id), type(type), label(label), inStockSince(day, month, year), price(price) { counter++; }
Article::~Article() { counter--; }
std::string Article::toString(SHOW type) const {

    char str[100];
    char strName[2][16] = { "Hardware", "Software"};
    std::string date = this->inStockSince.toString(type);

    sprintf(str, "[ ID: %d | Type: %s | Label: %s | InStockSince: %s | Price: %.2f]", this->id, strName[this->type], this->label.getString(), date.c_str(), this->price);

    return std::string(str);
}

void Article::setType(TYPE type){
    this->type = type;
}
void Article::setDate(const Date &inStockSince){
    this->inStockSince = inStockSince;
}
void Article::setPrice(double price){
    this->price = price;
}

unsigned int Article::getID() const{
    return this->id;
}
TYPE Article::getType() const{
    return type;
}
String Article::getLabel() const{
    return this->label;
}
Date Article::getDate() const{
    return this->inStockSince;
}
double Article::getPrice() const{
    return this->price;
}

int Article::counter = 0;
int Article::getInst(){
    return counter;
}
