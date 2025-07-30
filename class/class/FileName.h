#pragma once

#include "test.h"
class circle{
private:
	point center;
	int rad;
public:
	circle();

	circle(int x, int y, int rad);
	void display();

}