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
	//참조자 - 기존 메모리에 별명을 붙이는 것
	int n = 1;
	int& x = n; // 자료형 뒤 &를 붙이고  별칭 (n)을 만듦, 여기서는 &x가 n의 포인터가 된다. x 바꾸면 n도 바뀌고 n을 바꿔도 x이 바뀐다
	
	
	cout << &x << endl;

	cout << "------------------" << endl;
	int a = 10, b = 20;
	cout << "값에 의한 호출" << endl;
	swapval(a, b);
	cout << a << " "<<  b << endl;

	cout << "------------------" << endl;

	cout << "참조에 의한 호출" << endl;
	swapref(a, b);
	cout << a << " " << b << endl;

	return 0;
}