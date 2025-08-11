#include <iostream>
#include "Animal.h"

using namespace std;

class Cat : public Animal {
public:
	void cry() override {
		cout << "¾Ö¿Ë" << endl;
	}

	~Cat() override {
		cout << "½´·Úµù°Å ON" << endl;
	}

};//inherit
