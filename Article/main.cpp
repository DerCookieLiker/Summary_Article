#include <iostream>
#include "String.h"
#include "Date.h"
#include "Article.h"


int main(){

    Date d(16, 6, 2021);

    Article a(1, Software, "Apple", d, 0.4);

    a.setLabel(String("Anti Virus"));
    a.setPrice(20);

    std::cout << a.toString(FULL);
}
