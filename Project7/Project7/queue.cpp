#include <iostream>

#include <queue>

using namespace std;

int main() {
	queue<string> q;
	q.push("Aqwer");
	q.push("Bqwer");
	q.push("Cqwer");

	while (!q.empty()) {
		cout << q.front() << "님 처분 완료" << endl;
		q.pop();
	}

	cout << "전 대상 처분 완료" << endl;
	return 0;
}





