#include <iostream>

#include <queue>

using namespace std;

int main() {
	queue<string> q;
	q.push("Aqwer");
	q.push("Bqwer");
	q.push("Cqwer");

	while (!q.empty()) {
		cout << q.front() << "�� ó�� �Ϸ�" << endl;
		q.pop();
	}

	cout << "�� ��� ó�� �Ϸ�" << endl;
	return 0;
}





