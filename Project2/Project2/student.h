#ifndef STU_H
#define STU_H
#include <string>
#include "subject.h"
using namespace std;

class stu {
private:
	int stuid;
	string stuname;
	subject korean;
	subject mathme;


public:
	stu(int stuid, string stuname);

	void kor(string name, int score);

	void math(string name, int score);

	void info();


};
#endif