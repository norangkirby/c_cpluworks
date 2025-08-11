#include <iostream>
#include "students.h"

int main() {
	Student park(1001, "박상희");
	park.addsubject("국어", 85);
	park.addsubject("영어", 86);
	park.addsubject("수학", 88);

	park.showInfo();
	park.cal();
}

