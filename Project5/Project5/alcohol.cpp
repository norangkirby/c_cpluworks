#include "alcohol.h"
#include <iostream>
using namespace std;

alcohol::alcohol(string name, int price, int quantity, float alcoholper)
    : drink(name, price, quantity), alcoholper(alcoholper) {
}

void alcohol::printtitle() {
    cout << "상품명(도수[%])\t가격\t수량\t금액\n";
}

void alcohol::printdata() {
    cout << name << "(" << alcoholper << "%)\t" << price << "\t" << quantity << "\t" << calc() << endl;
}
