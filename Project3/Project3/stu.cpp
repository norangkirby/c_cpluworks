#include <iostream>
#include "students.h"
using namespace std;

//생성자 구현
Student::Student(int studentId, string studentName) :
	studentId(studentId),studentName(studentName){
}

void Student::addsubject(string name, int score) {
	if (subjectsount < 10) {
		subjects[subjectsount].setSubjectName(name);
		subjects[subjectsount].setScorePoint(score);
		subjectsount++;
	}

}

void Student::showInfo(){
	cout << "학번:  " << studentId << endl << "이름: " << studentName << endl;
	for (int i = 0; i < subjectsount; i++) {
		cout << subjects[i].getSubjectName() << "점수: " << subjects[i].getScorePoint() << endl;
	}
	cout << "----------" << endl;
	
}

void Student :: cal() {
	int sum = 0;
	for (int i = 0; i < subjectsount; i++) {
		sum += subjects[i].getScorePoint();
	}
	cout << (float)sum / subjectsount << endl;
	
}