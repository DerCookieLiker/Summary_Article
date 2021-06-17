#include "String.h"
#include <iostream>
#include <cstring>

String::String(const char* str){
    this->str = new char[strlen(str) + 1];
    strcpy(this->str, str);
}
String::String(const String &str){

    this->str = new char[str.getLength() + 1];
    strcpy(this->str, str.getString());
}
String::~String(){
    delete[] this->str;
}

int String::getLength() const{
    return strlen(this->str);
}
void String::append(const String &str){

    strcat(this->str, str.getString());
}

void String::addChar(char ch){
    this->addElement();
    this->str[this->getLength()] = ch;
    this->str[this->getLength()] = 0;
}
char String::getCharAt(int idx) const{
    if(idx < 0 || idx > this->getLength()) return '\0';
    return this->str[idx];
}
char* String::getString() const{
    return this->str;
}
int String::compare(const String &str) const{
    return strcmp(this->str, str.getString());
}

void String::toUpper(){
    for(int i = 0; i < this->getLength(); i++){

        if(this->str[i] >= 'a' && this->str[i] <= 'z'){
            this->str[i] -= 32;
        }
    }
}
void String::toLower(){
    for(int i = 0; i < this->getLength(); i++){

        if(this->str[i] >= 'A' && this->str[i] <= 'Z'){
            this->str[i] += 32;
        }
    }
}

void String::show() const{

    std::cout << this->str << std::endl;
}

void String::addElement(){

   char* temp = new char[this->getLength()];

    strcpy(temp, this->str);

    this->str = new char[strlen(temp) + 2];

    strcpy(this->str, temp);

    delete[] temp;
}

void String::insertCharAt(char ch, int idx){
    this->addElement();

    for(int i = this->getLength(); i >= idx; i--){
        this->str[i] = this->str[i - 1];
    }

    this->str[idx] = ch;
    this->str[this->getLength()] = 0;
}
void String::insertStringAt(const String &str, int idx){

    char* temp = str.getString();
    for(int i = 0; i < str.getLength(); i++){

        this->insertCharAt(temp[i], idx + i);
    }
    this->str[this->getLength()] = 0;
    delete temp;
}
