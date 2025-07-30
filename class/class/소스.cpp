#include <iostream>
#include "FileName.h"
using namespace std;


circle::circle(int x, int y, int rad) : center(x, y), rad(rad) {
	point center(x, y);


}

void circle::display() {
	cout << "원의 중심: " << center.getx()<< ","<< "반지름: "<<rad<< endl;

}

