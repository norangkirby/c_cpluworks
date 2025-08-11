#include <iostream>

#include <stack>

using namespace std;

int main() {

	stack<char> stk;

	stk.push('A');
	stk.push('B');
	stk.push('C');

	while (!stk.empty()) {
		cout << stk.top() << endl;
		stk.pop();
		
	}

	string str;
	cin >> str;
	stack<char> stk2;
	for (char c : str) {
		stk2.push(c);
	}
	while (!stk2.empty()) {
		cout << stk2.top();
		stk2.pop();
	}
	
	return 0;
}