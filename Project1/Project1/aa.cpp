#include <iostream>
using namespace std;

int main() {
	//정적 포인터
	int a = 3;
	int* p = &a;
	cout << p << endl;
	cout << *p << endl;
	cout << *p+10 << endl;
	*p += 10;
	cout << a << endl;
	
	//동적 포인터

	int* p1;
	p1 = new int;
	if (p1 == nullptr) {
		cout << "cannot generate" << endl;
		return 1;
	}

	*p1 = 5;
	cout << *p1 << endl;
	delete p1;

	//배열 포인터

	int* p2;
	p2 = new int[10];
	for (int i = 0;i<10;i++){
		*(p2 + i) = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		cout << *(p2 + i) << endl;
	}
	delete[] p2; // 배열인 경우

	//
	return 0;
}