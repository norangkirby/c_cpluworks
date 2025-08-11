#include <iostream>

#include <stack>

using namespace std;

int main() {

	stack <int> stk;
	stk.push(10);
	stk.push(20);
	stk.push(30);
	cout << stk.size() << endl;
	//요소 검색=stack은 배열 구조이며 먼저 들어간 요소가 나중에 꺼내짐

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