#include <iostream>

#include <vector>

#include <string>

using namespace std;

int main() {
	vector<string> v;
	v = { "라면","생수","화장지","계란" };
	cout << "메뉴 변경:" << endl;
	string chg;
	cin >> chg;
	cout << "번호 입력:" << endl;
	int a;
	cin >> a;
	v[a - 1] = chg;
	cout << "==================" << endl;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}




	return 0;
}