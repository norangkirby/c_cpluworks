#include "drink.h"
#include <iostream>
using namespace std;

drink::drink(string name, int price, int quantity)
    : name(name), price(price), quantity(quantity) {
}

int drink::calc() {
    return price * quantity;
}

void drink::printtitle() {
    cout << "상품명\t가격\t수량\t금액\n";
}

void drink::printdata() {
    cout << name << "\t" << price << "\t" << quantity << "\t" << calc() << endl;
}
