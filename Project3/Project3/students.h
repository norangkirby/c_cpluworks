#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "subjects.h"
using namespace std;

class Student {
private:
	int studentId;      //아이디
	string studentName; //이름
	Subject subjects[10];
	int subjectsount = 0;

public:
	Student(int studentId, string studentName);

	
	//수학 과목 설정
	void addsubject(string name, int score);

	//학생의 정보 출력
	void showInfo();

	void cal();
};
#endif