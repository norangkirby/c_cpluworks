#include <iostream>
using namespace std;

void swapval(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swapref(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;

}



int main() {
	//������ - ���� �޸𸮿� ������ ���̴� ��
	int n = 1;
	int& x = n; // �ڷ��� �� &�� ���̰�  ��Ī (n)�� ����, ���⼭�� &x�� n�� �����Ͱ� �ȴ�. x �ٲٸ� n�� �ٲ�� n�� �ٲ㵵 x�� �ٲ��
	
	
	cout << &x << endl;

	cout << "------------------" << endl;
	int a = 10, b = 20;
	cout << "���� ���� ȣ��" << endl;
	swapval(a, b);
	cout << a << " "<<  b << endl;

	cout << "------------------" << endl;

	cout << "������ ���� ȣ��" << endl;
	swapref(a, b);
	cout << a << " " << b << endl;

	return 0;
}