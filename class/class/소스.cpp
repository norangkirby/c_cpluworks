#include <iostream>
#include "FileName.h"
using namespace std;


circle::circle(int x, int y, int rad) : center(x, y), rad(rad) {
	point center(x, y);


}

void circle::display() {
	cout << "���� �߽�: " << center.getx()<< ","<< "������: "<<rad<< endl;

}

