#ifndef SUBJECT_H
#define SUBJECT_H
#include <string>    //string 자료형 사용
using namespace std; //소속 명시

class Subject {
private:
	string subjectName;  //과목명
	int scorePoint;      //점수

public:
	//기본 생성자 생략
	void setSubjectName(string subjectName);
	string getSubjectName();

	void setScorePoint(int scorePoint);
	int getScorePoint();
};

#endif 