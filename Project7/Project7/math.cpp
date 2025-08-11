#include <iostream>

using namespace std;
//���ø�: �Ϲ�ȭ ����

class Math {
public:

	//���ø��� T�ڷ��� ���
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