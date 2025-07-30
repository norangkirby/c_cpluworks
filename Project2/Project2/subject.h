#ifndef SUBJECT_H
#define SUBJECT_H
#include <string>

using namespace std;
class subject {

private:
	string name;
	int score;
public:
	void setname(string name);
	string getname();
	void setscore(int score);
	int getscore();


};

#endif