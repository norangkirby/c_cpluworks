#include <iostream>
using namespace std;

int main() {
	//���� ������
	int a = 3;
	int* p = &a;
	cout << p << endl;
	cout << *p << endl;
	cout << *p+10 << endl;
	*p += 10;
	cout << a << endl;
	
	//���� ������

	int* p1;
	p1 = new int;
	if (p1 == nullptr) {
		cout << "cannot generate" << endl;
		return 1;
	}

	*p1 = 5;
	cout << *p1 << endl;
	delete p1;

	//�迭 ������

	int* p2;
	p2 = new int[10];
	for (int i = 0;i<10;i++){
		*(p2 + i) = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		cout << *(p2 + i) << endl;
	}
	delete[] p2; // �迭�� ���

	//
	return 0;
}