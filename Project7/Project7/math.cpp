#include <iostream>

using namespace std;
//템플릿: 일반화 도구

class Math {
public:

	//템플릿에 T자료형 사용
	template<typename T>
	static T abs(T x) {
		return (x < 0) ? -x : x;
	}

	template<typename X>
	static X max(X a, X b) {
		return (a > b) ? a : b;
	}
};

int main() {

	cout << Math::abs(-10) << endl;
	cout << Math::abs(-69.74) << endl;
	cout << Math::max(6974, 892) << endl;

	return 0;
}