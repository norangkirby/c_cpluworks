#ifndef ALCOHOL_H
#define ALCOHOL_H

#include "drink.h"

class alcohol : public drink {
private:
    float alcoholper;
public:
    alcohol(string name, int price, int quantity, float alcoholper);

    static void printtitle();
    void printdata() override;
};

#endif
