#include <iostream>
#include <vector>

using namespace std;

int main() {
	auto a = 1;
	auto b = "qwerty";
	auto c = 6.9;
	cout << b << endl;
	vector<int> vec = { 1,2,3 };
	for (auto v : vec) {
		cout << v << endl;
	}
	return 0;
}