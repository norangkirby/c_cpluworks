#include <iostream>

#include <stack>

using namespace std;

int main() {

	stack <int> stk;
	stk.push(10);
	stk.push(20);
	stk.push(30);
	cout << stk.size() << endl;
	//��� �˻�=stack�� �迭 �����̸� ���� �� ��Ұ� ���߿� ������

	cout << stk << endl;
	cout << stk.top() << endl;
	stk.pop();
	cout << stk.top() << endl;
	stk.pop();
	cout << stk.top() << endl;
	stk.pop();
	if (!stk.empty()) {
		cout << "Stack" << endl;
		stk.pop();
	}
	else {
		cout << "No stack" << endl;
	}
	return 0;
}