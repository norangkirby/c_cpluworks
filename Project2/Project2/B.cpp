#include "student.h"

stu::stu(int id, string name) {
	this->stuid = id;
	this->stuname = name;

}

void stu::kor(string name, int score) {
	korean.setname(name);
	korean.setscore(score);
}

void stu::math(string name, int score) {
	mathme.setname(name);
	mathme.setscore(score);

}