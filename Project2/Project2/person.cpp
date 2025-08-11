#include "person.h"
#include <iostream>

Person::Person(string name, int money) :
	name(name), money(money) {

}

void Person::takebus(bus& bus) {
	if (money < bus.getfee()) {
		cout << "ÀÜ¾× ºÎÁ·" << endl;
	}
	else {
		bus.take();
		money -= bus.getfee();
	}
}

void Person::displayinfo() {
	cout << name << ": ÀÜ¾× " << money << " ¿ø" << endl;
}