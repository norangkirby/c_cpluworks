#ifndef DRINK_H
#define DRINK_H

#include <string>
using namespace std;

class drink {
protected:
    string name;
    int price;
    int quantity;
public:
    drink(string name, int price, int quantity);
    int calc();
    static void printtitle();
    virtual void printdata(); // virtual 추가 (다형성 위해)
};

#endif
