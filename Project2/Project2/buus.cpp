#include "bus.h"
#include <iostream>
using namespace std;

bus::bus(int num, int fee) : busnum(busnum), passenger(0), gain(0), fee(fee) {

}

void bus::take() {
	gain += fee;
	passenger++;

}

int bus::getfee() {
	return fee;
}

void bus::display() {
	cout << busnum << "�� ����" << endl << "����: " << gain << endl << "�°�: " << passenger << endl;
}