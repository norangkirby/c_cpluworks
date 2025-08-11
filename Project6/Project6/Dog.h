#include <iostream>
#include "Animal.h"

using namespace std; 

class Dog : public Animal {
public:
	void cry()override {
		cout << "개짖는소리" << endl;
	}
	~Dog() override {
		cout << "오늘 복날이다" << endl;
	}
};