#include "alcohol.h"
#include <iostream>
using namespace std;

alcohol::alcohol(string name, int price, int quantity, float alcoholper)
    : drink(name, price, quantity), alcoholper(alcoholper) {
}

void alcohol::printtitle() {
    cout << "��ǰ��(����[%])\t����\t����\t�ݾ�\n";
}

void alcohol::printdata() {
    cout << name << "(" << alcoholper << "%)\t" << price << "\t" << quantity << "\t" << calc() << endl;
}
