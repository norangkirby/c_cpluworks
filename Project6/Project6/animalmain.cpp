#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main() {
	/*Cat cat;
	cat.breathe();
	cat.cry();
	Dog dog;
	dog.breathe();
	dog.cry();*/

	Animal* cat = new Cat;
	cat->cry();

	Animal* dog = new Dog;

	delete cat;
	delete dog;

	return 0;
}