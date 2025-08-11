#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "subjects.h"
using namespace std;

class Student {
private:
	int studentId;      //���̵�
	string studentName; //�̸�
	Subject subjects[10];
	int subjectsount = 0;

public:
	Student(int studentId, string studentName);

	
	//���� ���� ����
	void addsubject(string name, int score);

	//�л��� ���� ���
	void showInfo();

	void cal();
};
#endif