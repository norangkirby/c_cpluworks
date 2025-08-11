#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> vec;

	vec.push_back(88);
	vec.push_back(70);
	vec.push_back(50);

	vector<int> vec1;
	vec1 = { 1,2,3,4,5,6,7,8 };
	
	
	cout << vec.at(0) << endl;
	cout << vec[0] << endl;
	cout << vec.back() << endl;
	cout << vec1.back() << endl;
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
	//반복자

	cout << "===============================" << endl;
	//포인터 사용해야 함
	vector<int>::iterator it = vec.begin();
	cout << *it << endl;
	cout << *(it+1) << endl;

	cout << "===============================" << endl;

	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << endl;
	}

	//범위기반 
	cout << "===============================" << endl;
	vec[1] = 100;
	vec.pop_back();
	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << endl;
	}
	return 0;
}