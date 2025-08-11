#include "drink.h"
#include "alcohol.h"
#include <iostream>
using namespace std;

int main() {
    drink coffee("커피", 2500, 4);
    drink greentea("녹차", 3000, 3);
    alcohol soju("소주", 3500, 2, 14.3f); // float 리터럴에는 f 붙이기

    drink::printtitle();
    coffee.printdata();
    greentea.printdata();
    soju.printdata();

    int total = coffee.calc() + greentea.calc() + soju.calc();
    cout << "총액: " << total << "원" << endl;

    return 0;
}
