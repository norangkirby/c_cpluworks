#include <iostream>
#include "students.h"

int main() {
	Student park(1001, "�ڻ���");
	park.addsubject("����", 85);
	park.addsubject("����", 86);
	park.addsubject("����", 88);

	park.showInfo();
	park.cal();
}

