#include <iostream>

using namespace std;

//static�� �ִ� ��� �Լ�

class math {
public:
	static int abs(int x) {
		return (x < 0) ? -x : x;
	}
};


int main() {
	int a = -1;
	math math1;
	cout << math::abs(a) << endl;


}