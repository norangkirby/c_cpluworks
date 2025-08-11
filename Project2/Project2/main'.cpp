#include "person.h"

int main() {
	Person woo("asdf", 10000);
	Person qwe("ghjk", 2000);
	bus assei(123, 1500);

	woo.takebus(assei);
	qwe.takebus(assei);
	woo.displayinfo();
	qwe.displayinfo();
	qwe.displayinfo();
	assei.display();



	return 0;
}