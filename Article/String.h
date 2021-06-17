#pragma once

class String{

public:

    String(const char* str = " ");
    String(const String &str);
    ~String();
    int getLength() const;
    void append(const String &str);

    void insertCharAt(char ch, int idx);
    void insertStringAt(const String &str, int idx);

    void addChar(char ch);

    char getCharAt(int idx) const;
    char* getString() const;

    int compare(const String &str) const;

    void toUpper();
    void toLower();

    void show() const;

private:
    char* str;

    void addElement();
};

