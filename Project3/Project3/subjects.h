#ifndef SUBJECT_H
#define SUBJECT_H
#include <string>    //string �ڷ��� ���
using namespace std; //�Ҽ� ���

class Subject {
private:
	string subjectName;  //�����
	int scorePoint;      //����

public:
	//�⺻ ������ ����
	void setSubjectName(string subjectName);
	string getSubjectName();

	void setScorePoint(int scorePoint);
	int getScorePoint();
};

#endif 