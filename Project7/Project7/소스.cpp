#include <iostream>

#include <vector>

#include <string>

using namespace std;

int main() {
	vector<string> v;
	v = { "���","����","ȭ����","���" };
	cout << "�޴� ����:" << endl;
	string chg;
	cin >> chg;
	cout << "��ȣ �Է�:" << endl;
	int a;
	cin >> a;
	v[a - 1] = chg;
	cout << "==================" << endl;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}




	return 0;
}