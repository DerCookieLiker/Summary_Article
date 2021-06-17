#include <iostream>
#include "String.h"
#include "Date.h"
#include "Article.h"

void firstFunc(){

    Article a1(1001, Hardware, "Optical Mouse", 10, 8, 2012, 12.90);

    String name("NoVirus 2015");
    Date date(15, 9, 2015);

    Article a2(2001, Software, name, date, 39.49);
    Article* aPtr = new Article(3001);

    double totalSum = 0;

    aPtr->setPrice(10.0);

    totalSum += a1.getPrice();
    totalSum += a2.getPrice();
    totalSum += aPtr->getPrice();

    std::cout << "Total price: " << totalSum << std::endl << "Thank you!" << std::endl;

    delete aPtr;
	return;
}
void secondFunc() {

    std::cout << "Current article instance count: " << Article::getInst() << std::endl;
    Article art1(1001, Hardware, "Optical Mouse",
                10, 8, 2012, 12.90);
    Article* artPtr = new Article[10];  //!!Default Constructor used
    std::cout << "Current article instance count: " << Article::getInst() << std::endl;
    delete[] artPtr;
    std::cout << "Current article instance count: " << Article::getInst() << std::endl;
}
int main(){

    firstFunc();
    secondFunc();
}
