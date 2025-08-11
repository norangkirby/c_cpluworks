#ifndef PERSON_H
#define PERSON_H
#include <string>
#include "bus.h"
using namespace std;

class Person {
private:
	string name;
	int money;
public:
	Person(string name, int money);
	void takebus(bus& bus); //참조자 사용
	void displayinfo();
};
#endif
