#include <iostream>
#include "Animal.h"

using namespace std;

class Cat : public Animal {
public:
	void cry() override {
		cout << "�ֿ�" << endl;
	}

	~Cat() override {
		cout << "���ڵ��� ON" << endl;
	}

};//inherit
